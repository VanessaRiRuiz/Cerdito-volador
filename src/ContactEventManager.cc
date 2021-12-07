#include "ContactEventManager.hh"
#include "GameObject.hh"
#include<iostream>

<<<<<<< HEAD
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
=======
ContactEventManager::ContactEventManager(std::vector<GameObject*>*& gameObjectDeleteList)
{
  this->gameObjectDeleteList = gameObjectDeleteList;
}

ContactEventManager::~ContactEventManager()
{
}

void ContactEventManager::BeginContact(b2Contact *contact)
{
  //b2ContactListener::BeginContact(contact);
>>>>>>> production

  GameObject* goA{(GameObject*) contact->GetFixtureA()->GetBody()->GetUserData().pointer};
  GameObject* goB{(GameObject*) contact->GetFixtureB()->GetBody()->GetUserData().pointer};

  if(goA && goB)
  {
<<<<<<< HEAD
    std::cout << "Contact between " << goA->getTagName() << " and " << goB->getTagName() << std::endl;
    //if(goB->getTagName().compare("bacon") == 0)
    //{
      //gameObjectDeleteList->push_back(goB);
    //}
=======
    if(goB->getTagName().compare("bacon") == 0)
    {
      gameObjectDeleteList->push_back(goB);
    }
>>>>>>> production
  }
}
void ContactEventManager::EndContact(b2Contact *contact)
{
<<<<<<< HEAD
  b2ContactListener::EndContact(contact);
}
=======
  //b2ContactListener::EndContact(contact);
}
>>>>>>> production
