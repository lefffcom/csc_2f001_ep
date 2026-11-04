#ifndef LOCATION_H
#define LOCATION_H

#include <cstddef>
#include <string>

struct location_t {
    std::string name;
    double latitude;
    double longitude;
    location_t** neighbors;
    std::size_t nb_neighbors;

    location_t(std::string name, double latitude, double longitude);
    ~location_t();

    void set_neighbors(location_t* list[]);
    double distance_to(location_t* to);
};

#endif
