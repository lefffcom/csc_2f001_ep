#include <stdio.h>
int sort_get_index(float tab[], int top, float val){
    for (int i = 0; i < top; i++) {
        if (val < tab[i]) {
            return i;
        }
    }
    return top;
}
void sort_insert_at(float tab[], int i, int top, float val){
    int j;
    for (j = top; j > i; j--) {
        tab[j] = tab[j - 1];
    }
    tab[i] = val;
}
void sort_insert(float tab[], int top, float val){
    int i = sort_get_index(tab, top, val);
    sort_insert_at(tab, i, top, val);
}
int nb_columns()
{
    return 32;
}
int nb_lines()
{
    return 16;
}
void grid_init(char grid[], char pixel){
    int i;
    for (i = 0; i < nb_lines() * nb_columns(); i++) {
        grid[i] = pixel;
    }
}
void grid_display(char grid[]){
    int x;
    int y;
    for (y = 0; y < nb_lines(); y++) {
        for (x = 0; x < nb_columns(); x++) {
            printf("%c", grid[y * nb_columns() + x]);
        }
        printf("\n");
    }
}
void plot_point(char grid[], int x, int y, char pixel){
    int row;
    if (x < 0 || x >= nb_columns() || y < 0 || y >= nb_lines()) {
        printf("Error: point (%d, %d) is outside the grid\n", x, y);
        exit(EXIT_FAILURE);
    }
    row = nb_lines() - y - 1;
    grid[row * nb_columns() + x] = pixel;
}
void plot_vline(char grid[], int x, float fy0, float fy1, char pixel){
    int y;
    int y0;
    int y1;
    y0 = (int)(fy0 + 0.5);
    y1 = (int)(fy1 + 0.5);
    if (fy0 == y0 - 0.5) {
        y0--;
    }
    for (y = y0; y <= y1; y++) {
        plot_point(grid, x, y, pixel);
    }
}
struct point {
    float x;
    float y;
};
void plot_poly_sweep(char grid[], struct point p[], int n, int x, char pixel){
    float vlines[n * 4];
    int top = 0;
    int i;
    int j;
    j = n - 1;
    for (i = 0; i < n; i++) {
        if ((p[i].x <= x && x < p[j].x) || (p[j].x <= x && x < p[i].x)) {
            float intersection;
            intersection = p[i].y + (x - p[i].x) * (p[j].y - p[i].y) / (p[j].x - p[i].x);
            sort_insert(vlines, top, intersection);
            top++;
        }
        j = i;
    }
    for (i = 0; i + 1 < top; i += 2) {
        plot_vline(grid, x, vlines[i], vlines[i + 1], pixel);
    }
}
void plot_poly(char grid[], struct point p[], int n, char pixel)
{
    int x;
    for (x = 0; x < nb_columns(); x++) {
        plot_poly_sweep(grid, p, n, x, pixel);
    }
}
int main(){
    char grid[nb_lines() * nb_columns()];
    struct point p[] = {{2, 13}, {10, 13}, {30, 7}, {10, 1}, {2, 1}, {18, 7}};
    int n = sizeof(p) / sizeof(p[0]);
    grid_init(grid, ' ');
    plot_poly(grid, p, n, '-');
    grid_display(grid);
    return 0;
}