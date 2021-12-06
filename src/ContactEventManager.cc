#include "ContactEventManager.hh"
#include "GameObject.hh"
#include<iostream>

//create a ContactEventManager constructor
ContactEventManager::ContactEventManager(/*std::vector<GameObject*>*& gameObjectDeleteList*/)
{
  //this->gameObjectDeleteList = gameObjectDeleteList;
}
//create a ContactEventManager destructor
ContactEventManager::~ContactEventManager()
{
  //do nothing
}

//create a BeginContact function
void ContactEventManager::BeginContact(b2Contact *contact)
{
  b2ContactListener::BeginContact(contact);

  GameObject* goA{(GameObject*) contact->GetFixtureA()->GetBody()->GetUserData().pointer};
  GameObject* goB{(GameObject*) contact->GetFixtureB()->GetBody()->GetUserData().pointer};

  if(goA && goB)
  {
    std::cout << "Contact between " << goA->getTagName() << " and " << goB->getTagName() << std::endl;
    //if(goB->getTagName().compare("bacon") == 0)
    //{
      //gameObjectDeleteList->push_back(goB);
    //}
  }
}
void ContactEventManager::EndContact(b2Contact *contact)
{
  b2ContactListener::EndContact(contact);
}
