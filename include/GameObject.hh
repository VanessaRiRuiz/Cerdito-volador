#pragma once
#include<SFML/Graphics.hpp>
#include "Rigidbody.hh"
#include "Drawable.hh"


class GameObject
{
protected:
  Drawable* drawable{};
  sf::RenderWindow* window{};
  Rigidbody* rigidbody{};
  std::string tagName{};
public:
  GameObject();
  GameObject(const char* textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row,
  b2BodyType bodyType,sf::RenderWindow*& window, b2World*& world);
  ~GameObject();
  //create function for setting up the tag name of the object
  void setTagName(std::string tagName);
  //create function for getting the tag name of the object
  std::string getTagName();
  virtual void Update(float& deltaTime);
  virtual void Draw();
};