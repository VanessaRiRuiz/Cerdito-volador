#include "Character.hh"
#include "InputSystem.hh"
#include "Animation.hh"

Animation *idleAnim{};
Animation *runAnim{};

Character::Character(const char *textureUrl, sf::Vector2f position, float scale, float width,
                     float height, int col, int row, float moveSpeed, sf::RenderWindow *&window, b2World *&world) : GameObject(textureUrl, position, scale, width, height, col, row, b2BodyType::b2_dynamicBody, window, world)
{

  soundBufferStepsSfx = new sf::SoundBuffer();
  soundSFXSteps = new sf::Sound();
  currentStepSFXTime = stepDelay;

  soundBufferStepsSfx->loadFromFile("../assets/audio/steps.ogg");
  soundSFXSteps->setBuffer(*soundBufferStepsSfx);
  soundSFXSteps->setVolume(volume);

  this->moveSpeed = moveSpeed;

  rigidbody->FreezeRotation(true);

  idleAnim = new Animation(0.10f, 3, 1, 4, 24, 21, drawable);
  runAnim = new Animation(0.10f, 3, 1, 4, 24, 21, drawable);
}

Character::~Character()
{
}

void Character::Update(float &deltaTime)
{
  GameObject::Update(deltaTime);

  Movement(deltaTime);
  FlipSprite();
  currentStepSFXTime += deltaTime;

  if (std::abs(InputSystem::GetAxis().x) > 0 || std::abs(InputSystem::GetAxis().y) > 0)
  {
    runAnim->Play(deltaTime);
    if(currentStepSFXTime >= stepDelay)
    {
      soundSFXSteps->play();
      currentStepSFXTime = 0.f;
    }
  }
  else
  {
    idleAnim->Play(deltaTime);
  }
}

void Character::Movement(float &deltaTime)
{
  rigidbody->MoveBody(b2Vec2(InputSystem::GetAxis().x * moveSpeed,
                             InputSystem::GetAxis().y * moveSpeed));
}

void Character::FlipSprite()
{
  drawable->GetSprite()->setScale(InputSystem::GetAxis().x < 0.f ? -drawable->GetScale() : InputSystem::GetAxis().x > 0.f ? drawable->GetScale()
                                                                                                                          : drawable->GetSprite()->getScale().x,
                                  drawable->GetSprite()->getScale().y);
}