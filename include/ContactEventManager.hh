#pragma once
#include<box2d/box2d.h>
#include "GameObject.hh"
#include<vector>

class ContactEventManager : public b2ContactListener
{
private:
<<<<<<< HEAD
  //std::vector<GameObject*>* gameObjectDeleteList;
public:
  ContactEventManager(/*std::vector<GameObject*>*& gameObjectDeleteList*/);
=======
  std::vector<GameObject*>* gameObjectDeleteList;
public:
  ContactEventManager(std::vector<GameObject*>*& gameObjectDeleteList);
>>>>>>> production
  ~ContactEventManager();

  void BeginContact(b2Contact *contact) override;
  void EndContact(b2Contact *contact) override;
};