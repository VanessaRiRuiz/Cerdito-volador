#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
#include<box2d/box2d.h>
#include "DrawPhysics.hh"
#include "GameObject.hh"
#include "ContactEventManager.hh"
#include "TileGroup.hh"
<<<<<<< HEAD
#include "WallObject.hh"
=======
#include <SFML/Audio.hpp>
>>>>>>> production


class Game
{
private:
  sf::RenderWindow* window{};
  sf::Event* event{};
  b2World* world{};
  b2Vec2* gravity{};
  b2Draw* drawPhysics{};
  ContactEventManager* contactEventManager{};

  float deltaTime{};
  sf::Clock* gameClock{};

  std::vector<GameObject*>* gameObjects;
<<<<<<< HEAD
  std::vector<WallObject*>* wallObjects;
=======
  std::vector<GameObject*>* gameObjectsDeleteList;
>>>>>>> production

  void MainLoop();
  void UpdatePhysics();
  void Update();
  void Start();
  void Render();
  void Draw();
  void InputHandle();

public:
  Game();
  ~Game();

  void Run();
};