#pragma once
#include<SFML/Graphics.hpp>
#include "Drawable.hh"

class Tile : public Drawable
{
private:

public:
  Tile(const char* textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row);
  ~Tile();
};