#ifndef SHORTEST_PATH_H
#define SHORTEST_PATH_H

#include "location.h"

struct node_t {
    node_t* next;
    location_t* location;
    node_t* from;
    double from_origin;
    double total;
    bool visited;

    node_t(location_t* location, node_t* from, double from_origin,
           double total, node_t* next);
};

struct shortest_path_t {
    node_t* head;
    node_t* base;
    location_t* from;
    location_t* to;

    shortest_path_t(location_t* from, location_t* to);
    ~shortest_path_t();

    void compute();
    void display();
};

#endif
