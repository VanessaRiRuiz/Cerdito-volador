
#pragma once
#include "WallObject.hh"
#include "Animation.hh"
class CloudH : public WallObject
{
private:
  Animation* idleAnim{};
public:
  CloudH(const char* textureUrl, sf::Vector2f position, 
  float scale, float width, float height, int col, int row, 
  sf::RenderWindow*& window, b2World*& world);
  ~CloudH();
  void Update(float& deltaTime) override;
};
