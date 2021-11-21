#include "Cloud.hh"

Cloud::Cloud(const char* textureUrl, sf::Vector2f position, 
float scale, float width, float height, int col, int row, 
sf::RenderWindow*& window, b2World*& world) :
GameObject(textureUrl, position, scale, width, height, col, row, b2BodyType::b2_staticBody, window, world)
{
  idleAnim2 = new Animation(0.10f, 5,2, 3, 15, 28, drawable);
}

Cloud::~Cloud()
{
}

void Cloud::Update(float& deltaTime)
{
  idleAnim2->Play(deltaTime);
}