#ifndef KABUKI_ARCADE_PACWOMAN_PACWOMAN
#define KABUKI_ARCADE_PACWOMAN_PACWOMAN

#include "character.h"
//
#include "animator.h"

namespace kabuki {
namespace arcade {

class Pac : public Character {
  bool is_dead_, is_dying_;
  sf::Sprite visual_;
  Animator run_animator_, die_animator_;

  void draw(sf::RenderTarget& target, sf::RenderStates states) const;

 public:
  Pac(sf::Texture& texture);

  void Die();

  void Reset ();

  bool IsDying();

  bool IsDead();

  void Update(sf::Time delta);
};
}  // namespace arcade
}  // namespace kabuki
#endif
