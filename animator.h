#ifndef UNSEENIA_PACMOD_ANIMATOR
#define UNSEENIA_PACMOD_ANIMATOR

#include <SFML/Graphics.hpp>

#include <vector>

namespace kabuki {
namespace arcade {

class Animator {
  std::vector<sf::IntRect> frames_;
  int current_frame_;
  bool is_playing_;
  sf::Time duration_;
  bool loop_;

 public:
  Animator();

  void AddFrame(sf::IntRect frame);

  void Play(sf::Time duration, bool loop);
  bool IsPlaying() const;

  void Update(sf::Time delta);
  void Animate(sf::Sprite& sprite);
};
}  // namespace arcade
}  // namespace kabuki
#endif
