#pragma once
#include "GameObject.hh"
#include "Animation.hh"
class Cloud : public GameObject
{
private:
  Animation* idleAnim2{};
public:
  Cloud(const char* textureUrl, sf::Vector2f position, 
  float scale, float width, float height, int col, int row, 
  sf::RenderWindow*& window, b2World*& world);
  ~Cloud();
  void Update(float& deltaTime) override;
};