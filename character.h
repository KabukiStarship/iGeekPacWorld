#ifndef KABUKI_ARCADE_PACWOMAN_CHARACTER
#define KABUKI_ARCADE_PACWOMAN_CHARACTER

#include <SFML/Graphics.hpp>

#include "maze.h"
//
#include <array>

namespace kabuki {
namespace arcade {

class Character : public sf::Drawable, public sf::Transformable {
  float speed_;             //< The spped in ???.
  sf::Vector2i direction_,  //< The current direction.
      next_direction_;      //< The next direction to face.
  Maze* maze_;              //< The maze this is in.

  sf::Vector2i previous_intersection_;
  std::array<bool, 4> available_directions_;

 public:
  Character();

  virtual void Update(sf::Time delta);

  void SetDirection(sf::Vector2i direction);

  sf::Vector2i Direction() const;

  void SetSpeed(float speed);

  float Speed() const;

  sf::FloatRect CollisionBox () const;

  void SetMaze(Maze* maze);

  bool WillMove();

 protected:
  virtual void ChangeDirection() {}
};
}  // namespace arcade
}  // namespace kabuki
#endif
