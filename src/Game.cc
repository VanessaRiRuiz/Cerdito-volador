#include "CommonHeaders.hh"
#include "Character.hh"
#include "Candle.hh"
#include "Cloud.hh"

sf::RectangleShape* rectangle{new sf::RectangleShape(sf::Vector2f(300.f, 300.f))};
Character* character1{};
GameObject* chest1{};
Candle* candle2{};
Candle* candle{};
Cloud* cloud{};


TextAsset* text1{};

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
  gameClock = new sf::Clock();
  //gravity = new b2Vec2(0.f, 9.8f);
  gravity = new b2Vec2(0.f, 0.f);
  world = new b2World(*gravity);
  drawPhysics = new DrawPhysics(window);

  gameObjects = new std::vector<GameObject*>();

  character1 = new Character(ASSETS_SPRITES, sf::Vector2f(100.f, 100.f), GAME_SCALE, 20, 16, 0, 5, 200.f, window, world);
  chest1 = new GameObject(ASSETS_SPRITES, sf::Vector2f(500.f, 300.f), GAME_SCALE, 16, 16, 6, 1, b2BodyType::b2_staticBody, window, world);
  candle = new Candle(ASSETS_SPRITES, sf::Vector2f(500.f, 500.f), GAME_SCALE, 16, 16, 6, 3, window, world);
  candle2 = new Candle(ASSETS_SPRITES, sf::Vector2f(440.f, 500.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloud= new Cloud(ASSETS_SPRITES, sf::Vector2f(300.f, 300.f), GAME_SCALE, 16, 16, 4, 5, window, world);


  //candleIdle = new Animation(0.05f, 3, 6, 11, 16, 16, drawable);
  text1 = new TextAsset(window, ASSETS_FONT, "Cerdito Volador",
  14, sf::Color::White, sf::Vector2f(50.f, 50.f));

  gameObjects->push_back(character1);
  gameObjects->push_back(chest1);
  gameObjects->push_back(candle);
  gameObjects->push_back(candle2);
  gameObjects->push_back(cloud);

}

Game::~Game()
{
}

void Game::Start()
{
  uint32 flags{};
  flags += b2Draw::e_shapeBit;
  //flags += b2Draw::e_pairBit;

  world->SetDebugDraw(drawPhysics);
  drawPhysics->SetFlags(flags);
}

void Game::Run()
{
  Start();
  MainLoop();
}

void Game::MainLoop()
{
  while (window->isOpen())
  {
    while (window->pollEvent(*event))
    {
      if(event->type == sf::Event::Closed)
      {
        window->close();
      }
    }

    deltaTime = gameClock->getElapsedTime().asSeconds();
    gameClock->restart();

    UpdatePhysics();
    InputHandle();
    Update();
    Render();
  }
}

  void Game::UpdatePhysics()
  {
    world->Step(deltaTime, 8, 8);
    world->ClearForces();
  }

  void Game::Update()
  {
    for(auto& gameObject : *gameObjects)
    {
      gameObject->Update(deltaTime);
    }
  }

  void Game::Render()
  {
    window->clear(sf::Color{ 0, 0, 255, 120 });
    Draw();
    window->display();
  }

  void Game::Draw()
  {
    for(auto& gameObject : *gameObjects)
    {
      gameObject->Draw();
    }
    text1->Draw();
    //world->DebugDraw();
  }

  void Game::InputHandle()
  {

  }