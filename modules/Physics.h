#include "modules/Player.h"

class Physics {
public:
  static void move(Player& object, float boostDown, float velocityUp, float dt, float& vy);
  static void kick(float velocityUp, float& vy);
};
