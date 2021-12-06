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
  const char* tagName{};
public:
  GameObject();
  GameObject(const char* textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row,
  b2BodyType bodyType,sf::RenderWindow*& window, b2World*& world);
  ~GameObject();
  //create function for setting up the tag name of the object
  void setTagName(const char* tagName);
  //create function for getting the tag name of the object
  const char* getTagName() const;
  virtual void Update(float& deltaTime);
  virtual void Draw();
};