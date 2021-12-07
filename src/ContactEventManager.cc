#include "ContactEventManager.hh"
#include "GameObject.hh"
#include<iostream>
#include<cstring>
#include<algorithm>

ContactEventManager::ContactEventManager(Score*& score, std::vector<GameObject*>*& gameObjectDeleteList)
{
  this->score = score;
  this->gameObjectDeleteList = gameObjectDeleteList;

}

ContactEventManager::~ContactEventManager()
{
}

void ContactEventManager::BeginContact(b2Contact *contact)
{
  //b2ContactListener::BeginContact(contact);

  GameObject* goA{(GameObject*) contact->GetFixtureA()->GetBody()->GetUserData().pointer};
  GameObject* goB{(GameObject*) contact->GetFixtureB()->GetBody()->GetUserData().pointer};
  if(goA && goB)
  {
    if(goB->getTagName().compare("bacon") == 0)
    {
      score->AddPoints(1);
      gameObjectDeleteList->push_back(goB);
    }
    if(goB->getTagName().compare("crown") == 0)
    {
      score->AddPoints(2);
      gameObjectDeleteList->push_back(goB);
    }
  }
}
void ContactEventManager::EndContact(b2Contact *contact)
{
  //b2ContactListener::EndContact(contact);
}
