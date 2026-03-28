#include "../include/VtkExporter.hpp"
#include "../include/ThermalGrid.hpp"
#include <fstream>
#include <iostream>
#include <stdexcept>

void VtkExporter::exportToVTK(const std::string& filepath, const GridMap& temp){
  using namespace std;
  //opening the file
  ofstream outputFile(filepath);
  
  //Validation
  if (!outputFile.is_open()) {
    //using string for printing an error
    throw runtime_error("Couldn't open the file: " + filepath);
  }
  
  outputFile << "vtk DataFile Version 3.0\n";
  outputFile << "\n";
  outputFile << "ASCII\n";
  outputFile << "DATASET STRUCTURED_POINTS\n" << "DIMENSIONS 100 100 1\n" << "ORIGIN 0 0 0\n" << "SPACING 1 1 1\n";
  outputFile << "POINT_DATA 10000\n" << "SCALARS Temp float 1\n" << "LOOKUP_TABLE default\n";
  

  int w = temp.getWidth();
  int h = temp.getHeight();
  
  for (int y = 0; y < h; ++y) {
    for (int x = 0; x < w; ++x) {
        float tempValue = temp.getTemp(x, y);
        outputFile << temp.getWidth() << " " << temp.getHeight() << " " << tempValue << endl; 
      }
    }
}
