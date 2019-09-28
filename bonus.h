#ifndef KABUKI_ARCADE_PACWOMAN_BONUS
#define KABUKI_ARCADE_PACWOMAN_BONUS

#include "../../../../SFML/include/SFML/Graphics.hpp"

namespace kabuki { namespace arcade {

class Bonus : public sf::Drawable, public sf::Transformable {
  sf::Sprite visual_;

  void draw(sf::RenderTarget& target, sf::RenderStates states) const;

  public:

  enum {
    kBanana = 0,
    kApple,
    kCherry
  }

  Bonus (sf::Texture& texture);

  SetFruit(Fruit fruit);
};
}
}
#endif
