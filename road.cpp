#include "road.h"

// Constructor for the Road class
// Takes three parameters: fromCity, toCity, and distance
Road::Road(const std::string& fromCity, const std::string& toCity, int distance)
    : fromCity(fromCity), toCity(toCity), distance(distance) {
    // Initialize the member variables with the provided values
    // fromCity: The starting city of the road
    // toCity: The destination city of the road
    // distance: The distance between the two cities along the road
}

