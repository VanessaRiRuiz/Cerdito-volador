#include "Tile.hh"

Tile::Tile(const char* textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row) :
Drawable(textureUrl, position, scale, width, height, col, row)
{
}

Tile::~Tile()
{
}