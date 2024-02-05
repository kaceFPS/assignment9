#include "city.h"
#include <tuple> // Add this include for std::tuple


// Constructor for the City class
// Takes five parameters: id, code, name, population, and elevation
City::City(const std::string& id, const std::string& code, const std::string& name, int population, int elevation)
    : id(id), code(code), name(name), population(population), elevation(elevation) {
    // Initialize the member variables with the provided values
    // id: The unique identifier of the city
    // code: The code representing the city
    // name: The name of the city
    // population: The population of the city
    // elevation: The elevation of the city above sea level
}
