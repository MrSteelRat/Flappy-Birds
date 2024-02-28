#include "SFML/Graphics.hpp"
#include <string>

class Environment {
public:
  Environment();
  void setDefaultValue();
  void setPosition();
  void move();
  void draw();
  float getWidth();
  float getHeight();
  sf::Vector2f getPosition() const;
  bool isMoving() const;
  void setMoving(bool isMoving);

private:
  sf::Texture texture;
  sf::Sprite UpperPartEnvironment;
  sf::Sprite LowerPartEnvironment;

  float height;
  float width;
  float scaleX;
  float scaleY;
  sf::Vector2f position;
  bool moving;
};
