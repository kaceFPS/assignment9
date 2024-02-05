#ifndef ROAD_H
#define ROAD_H

#include <string>

// Declaration of the Road class
class Road {
public:
    // Member variables to store information about the road
    std::string fromCity;   // The starting city of the road
    std::string toCity;     // The destination city of the road
    int distance;           // The distance between the two cities along the road

    // Constructor for the Road class
    // Takes three parameters: fromCity, toCity, and distance
    Road(const std::string& fromCity, const std::string& toCity, int distance);
};

#endif // ROAD_H
