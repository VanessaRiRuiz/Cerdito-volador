
#include "CloudH.hh"

CloudH::CloudH(const char* textureUrl, sf::Vector2f position, 
float scale, float width, float height, int col, int row, 
sf::RenderWindow*& window, b2World*& world) :
GameObject(textureUrl, position, scale, width, height, col, row, b2BodyType::b2_staticBody, window, world)
{
  idleAnim = new Animation(0.20f, 11, 1, 2.7, 27, 10, drawable);
}

CloudH::~CloudH()
{
}

void CloudH::Update(float& deltaTime)
{
  idleAnim->Play(deltaTime);
}
