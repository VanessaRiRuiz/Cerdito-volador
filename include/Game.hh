#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
#include<box2d/box2d.h>
#include "DrawPhysics.hh"
#include "GameObject.hh"
#include "ContactEventManager.hh"
#include "TileGroup.hh"
#include <SFML/Audio.hpp>


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
  std::vector<GameObject*>* gameObjectsDeleteList;

   sf::SoundBuffer *soundBufferStepsSfx{};
  sf::Sound *soundSFXSteps{};

  float volume{5.f};
  float stepDelay{10.f};

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