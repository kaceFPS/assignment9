#ifndef CITY_H
#define CITY_H

#include <string>

// Declaration of the City class
class City {
public:
    // Member variables to store information about the city
    std::string id;         // The unique identifier of the city
    std::string code;       // The code representing the city
    std::string name;       // The name of the city
    int population;         // The population of the city
    int elevation;          // The elevation of the city above sea level

    // Constructor for the City class
    // Takes five parameters: id, code, name, population, and elevation
    City(const std::string& id, const std::string& code, const std::string& name, int population, int elevation);
};

#endif // CITY_H
