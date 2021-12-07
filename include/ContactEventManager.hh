#pragma once
#include <box2d/box2d.h>
#include "GameObject.hh"
#include "Score.hh"
#include <vector>

class ContactEventManager : public b2ContactListener
{
private:
  Score *score;
  std::vector<GameObject *> *gameObjectDeleteList;

public:
  ContactEventManager(Score *&score, std::vector<GameObject *> *&gameObjectDeleteList);
  ~ContactEventManager();

  void BeginContact(b2Contact *contact) override;
  void EndContact(b2Contact *contact) override;
};