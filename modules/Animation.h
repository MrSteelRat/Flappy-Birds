#include <vector>
#include <string>

#include "SFML/Graphics.hpp"

class Animation {
public:
  Animation(const std::string& name, size_t frameCount);
  void addFrame(
    const sf::Texture& textire, const sf::IntRect& collider = {0, 0, 0, 0});
  std::Sprites& getCurrentFrame();
  void update();
  ~Animation();

private:
  std::vector<sf::Texture> textures;
  std::vector<sf::Sprite> sprites;
  std::string name;
  size_t frameCount;
  size_t currentFrame;
};