#include "Candle.hh"

Candle::Candle(const char* textureUrl, sf::Vector2f position, 
float scale, float width, float height, int col, int row, 
sf::RenderWindow*& window, b2World*& world) :
GameObject(textureUrl, position, scale, width, height, col, row, b2BodyType::b2_staticBody, window, world)
{
  idleAnim = new Animation(0.10f, 11,3, 5, 28, 10, drawable);
}

Candle::~Candle()
{
}

void Candle::Update(float& deltaTime)
{
  idleAnim->Play(deltaTime);
}