#include "../include/ConfigParser.hpp"
#include "../include/HeatSource.hpp"

int gridSizeX = 100;
int gridSizeY = 100;
float alpha = 100.0f;
int deltaTime = 100;
int simTime = 100;

void setup(CLI::App sim) {
sim.add_flag("-x", gridSizeX, "Determine a size of grid in x direction.")->required();
sim.add_flag("-y", gridSizeY, "Determine a size of grid in y direction.")->required();
sim.add_flag("-a", alpha, "Silicon diffusion.");
sim.add_flag("-d", deltaTime, "Determine an accuracy of time.");
sim.add_flag("-s", simTime, "Determine a duration of the simulation.");
}
