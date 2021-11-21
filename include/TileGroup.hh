#pragma once
#include "Tile.hh"
#include<iostream>

class TileGroup
{
private:
  void GenerateTiles();
  std::vector<Tile*>* tiles;
public:
  TileGroup(/* args */);
  ~TileGroup();
};