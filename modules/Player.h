#include <unordered_map>
#include <string>
#include <iostream>
#include "SFML/System/Clock.hpp"
#include "SFML/Graphics.hpp"

#include "modules/Animation.h"

class Player {
public:
  Player();
  void setPosition(float x, float y);
  void setScale(float x, float y);
  void setDefaultSprite(const std::string& path);
  void addAnimation(
  const std::string& name,
  const std::string& path,
  size_t frameCount,
  const sf::IntRect& collider = {0, 0, 0, 0});
  void animate(
  const std::string& name, float msBetweenFrames, sf::RenderWindow& window);
  void move(float x, float y);

private:
  std::unordered_map<std::string, Animation> animations;
  std::string currentAnimation;
  sf::Vector2f position;
  sf::Vector2f scale;
  float width; 
  float height;
  bool colliderVisible;
  sf::Clock lastTime;
};
