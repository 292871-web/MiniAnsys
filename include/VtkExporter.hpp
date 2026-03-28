#include <string>

class GridMap;

class VtkExporter {
  public:
    static void exportToVTK(const std::string& filepath, const GridMap& temp);
};
