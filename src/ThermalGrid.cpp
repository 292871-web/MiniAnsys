#include <stdexcept>
#include "../include/ThermalGrid.hpp"

GridMap::GridMap(int width, int height, float defaultTemp) : m_width(width), m_height(height), m_coordinates(width * height, defaultTemp) {
  //just in case
  if (width <= 0 || height <= 0) {
    throw std::invalid_argument("Dimensions of grid cannot be lower than 1");
  }
}
  
float GridMap::getTemp(int x, int y) const {
  //just in case
  if (x <= 0 || x >= m_width || y <= 0 || y >= m_height) {
    throw std::out_of_range("Grid's coordinates cannot be out of initialized range");
    }
    int index = y * m_width + x;
    return m_coordinates[index];
  }
void GridMap::setTemp(int x, int y, float newTemp){
  if (x < 0 || x >= m_width || y < 0 || y >= m_height) {
    throw std::out_of_range("Wspolrzedne zapisu poza granicami mapy!");
  }
  int index = y * m_width + x;
  m_coordinates[index] = newTemp;
}

void GridMap::changeTemp(int x, int y, float deltaTemp){
  float currentTemp = getTemp(x, y);
  float updatedTemp = currentTemp + deltaTemp;
  
  setTemp(x, y, updatedTemp);
}
