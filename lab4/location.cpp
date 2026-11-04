#include "location.h"

#include <algorithm>
#include <cmath>
#include <numbers>
#include <utility>

location_t::location_t(std::string name, double latitude, double longitude)
    : name(std::move(name)), latitude(latitude), longitude(longitude),
      neighbors(nullptr), nb_neighbors(0) {}

location_t::~location_t() {
    delete[] neighbors;
}

void location_t::set_neighbors(location_t* list[]) {
    delete[] neighbors;
    neighbors = list;
    nb_neighbors = 0;
    while (neighbors != nullptr && neighbors[nb_neighbors] != nullptr) {
        ++nb_neighbors;
    }
}

double location_t::distance_to(location_t* to) {
    if (to == this) {
        return 0.0;
    }
    double x = std::sin(to->latitude) * std::sin(latitude)
        + std::cos(to->longitude - longitude) * std::cos(to->latitude) * std::cos(latitude);
    return 6378.0 * (std::numbers::pi / 2.0 - std::asin(std::clamp(x, -1.0, 1.0)));
}
