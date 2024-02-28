#include <vector>

#include "SFML/Graphics.hpp"
#include "SFML/Graphics/RenderWindow.hpp"

#include "Environment.h"
#include "Player.h"

class Controller {
public:
  Controller(size_t width, size_t height, const std::string& title);
  void run();
  ~Controller();

private:
  sf::RenderWindow windows;
  Player bird;
  std::vector<Environment> environment;
  float boostFail;
  float velocityUp;

};
