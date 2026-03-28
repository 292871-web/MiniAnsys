#include <vector>

class GridMap {
  private: 
    int m_height;
    int m_width;
    std::vector<int> m_coordinates;
  public: 
    GridMap(int width, int height, float defaultTemp);
    int getHeight() const { return m_height; }
    int getWidth() const { return m_width; }
    
    float getTemp(int x, int y) const;
    
    void setTemp(int x, int y, float newTemp);
    
    void changeTemp(int x, int y, float deltaTemp);  
};
