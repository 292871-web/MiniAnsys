//basic variables
struct CoreGeometry {
  int x;
  int y;
  int width;
  int height;
  float powerWatts;
};
//config parser
struct Config {
  public:
    int gridSizeX;
    int gridSizeY;
    float alpha;
    int deltaTime;
    int simTime;
  private: 
    int m_gridSizeX;
    int m_gridSizeY;
    float m_alpha;
    int m_deltaTime;
    int m_simTime;
};

