#include "CommonHeaders.hh"
#include "Character.hh"
#include "CloudH.hh"

sf::RectangleShape* rectangle{new sf::RectangleShape(sf::Vector2f(300.f, 300.f))};
Character* character1{};
//GameObject* chest1{};

//fila arriba
CloudH* cloudh{};CloudH* cloudh2{};CloudH* cloudh3{};CloudH* cloudh4{};CloudH* cloudh5{};
CloudH* cloudh6{};CloudH* cloudh7{};CloudH* cloudh8{};CloudH* cloudh9{};CloudH* cloudh10{};
CloudH* cloudh11{};CloudH* cloudh12{};CloudH* cloudh13{};CloudH* cloudh14{};CloudH* cloudh15{};

//fila abajo
CloudH* cloudh16{};CloudH* cloudh17{};CloudH* cloudh18{};CloudH* cloudh19{};CloudH* cloudh20{};
CloudH* cloudh21{};CloudH* cloudh22{};CloudH* cloudh23{};CloudH* cloudh24{};CloudH* cloudh25{};
CloudH* cloudh26{};CloudH* cloudh27{};CloudH* cloudh28{};CloudH* cloudh29{};CloudH* cloudh30{};


//laberinto

CloudH* cloudh31{};CloudH* cloudh32{};CloudH* cloudh33{};CloudH* cloudh34{};CloudH* cloudh35{};
CloudH* cloudh36{};CloudH* cloudh37{};CloudH* cloudh38{};

CloudH* cloudh39{};CloudH* cloudh40{};CloudH* cloudh41{};
CloudH* cloudh42{};

CloudH* cloudh44{};CloudH* cloudh45{};CloudH* cloudh46{};CloudH* cloudh47{};CloudH* cloudh48{};
CloudH* cloudh49{};CloudH* cloudh50{};CloudH* cloudh51{};
CloudH* cloudh98{};CloudH* cloudh99{};CloudH* cloudh100{};CloudH* cloudh101{};CloudH* cloudh102{};
CloudH* cloudh103{};CloudH* cloudh104{};CloudH* cloudh105{};CloudH* cloudh106{};CloudH* cloudh107{};
CloudH* cloudh108{};CloudH* cloudh109{};CloudH* cloudh110{};CloudH* cloudh111{};CloudH* cloudh112{};
CloudH* cloudh113{};CloudH* cloudh114{};CloudH* cloudh115{};CloudH* cloudh116{};
CloudH* cloudh117{};CloudH* cloudh118{};CloudH* cloudh119{};CloudH* cloudh120{};CloudH* cloudh121{};
CloudH* cloudh122{};CloudH* cloudh123{};CloudH* cloudh124{};CloudH* cloudh125{};CloudH* cloudh126{};
CloudH* cloudh127{};CloudH* cloudh128{};CloudH* cloudh129{};CloudH* cloudh130{};CloudH* cloudh131{};
CloudH* cloudh132{};CloudH* cloudh133{};CloudH* cloudh134{};CloudH* cloudh135{};CloudH* cloudh136{};
CloudH* cloudh137{};CloudH* cloudh138{};CloudH* cloudh139{};CloudH* cloudh140{};CloudH* cloudh141{};
CloudH* cloudh142{};CloudH* cloudh143{};CloudH* cloudh144{};
CloudH* cloudh145{};
CloudH* cloudh146{};
CloudH* cloudh147{};CloudH* cloudh148{};CloudH* cloudh149{};CloudH* cloudh150{};CloudH* cloudh151{};


//columna derecha
CloudH* cloudh52{};CloudH* cloudh53{};CloudH* cloudh54{};CloudH* cloudh55{};CloudH* cloudh56{};
CloudH* cloudh57{};CloudH* cloudh58{};CloudH* cloudh59{};CloudH* cloudh60{};CloudH* cloudh61{};
CloudH* cloudh62{};

CloudH* cloudh74{};CloudH* cloudh75{};CloudH* cloudh76{};CloudH* cloudh77{};CloudH* cloudh78{};
CloudH* cloudh79{};CloudH* cloudh80{};CloudH* cloudh81{};CloudH* cloudh82{};CloudH* cloudh83{};
CloudH* cloudh84{};CloudH* cloudh85{};


//columna izquierda
CloudH* cloudh63{};CloudH* cloudh64{};CloudH* cloudh65{};CloudH* cloudh66{};CloudH* cloudh67{};
CloudH* cloudh68{};CloudH* cloudh69{};CloudH* cloudh70{};CloudH* cloudh71{};CloudH* cloudh72{};
CloudH* cloudh73{};CloudH* cloudh86{};CloudH* cloudh87{};CloudH* cloudh88{};CloudH* cloudh89{};
CloudH* cloudh90{};CloudH* cloudh91{};CloudH* cloudh92{};CloudH* cloudh93{};CloudH* cloudh94{};
CloudH* cloudh95{};CloudH* cloudh96{};CloudH* cloudh97{};


TextAsset* text1{};

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
  gameClock = new sf::Clock();
  gravity = new b2Vec2(0.f, 0.f);
  world = new b2World(*gravity);
  drawPhysics = new DrawPhysics(window);

  gameObjects = new std::vector<GameObject*>();

  character1 = new Character(ASSETS_SPRITES, sf::Vector2f(500.f, 500.f), GAME_SCALE, 20, 16, 0, 5, 200.f, window, world);
 //  chest1 = new GameObject(ASSETS_SPRITES, sf::Vector2f(500.f, 300.f), GAME_SCALE, 16, 16, 6, 1, b2BodyType::b2_staticBody, window, world);
  //fila arriba
  cloudh = new CloudH(ASSETS_SPRITES, sf::Vector2f(10, 20), GAME_SCALE, 16, 16, 6, 3, window, world);
  cloudh2 = new CloudH(ASSETS_SPRITES, sf::Vector2f(75, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh3 = new CloudH(ASSETS_SPRITES, sf::Vector2f(140, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh4 = new CloudH(ASSETS_SPRITES, sf::Vector2f(205, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh5 = new CloudH(ASSETS_SPRITES, sf::Vector2f(270, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh6 = new CloudH(ASSETS_SPRITES, sf::Vector2f(335, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh7 = new CloudH(ASSETS_SPRITES, sf::Vector2f(400, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh8 = new CloudH(ASSETS_SPRITES, sf::Vector2f(465, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh9 = new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh10 = new CloudH(ASSETS_SPRITES, sf::Vector2f(595, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh11 = new CloudH(ASSETS_SPRITES, sf::Vector2f(660, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh12 = new CloudH(ASSETS_SPRITES, sf::Vector2f(725, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh13 = new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh14 = new CloudH(ASSETS_SPRITES, sf::Vector2f(855, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh15 = new CloudH(ASSETS_SPRITES, sf::Vector2f(935, 20), GAME_SCALE, 16, 16, 4, 5, window, world);
  
  //columna derecha
  cloudh74= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 54.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh75= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 104.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh52= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 154.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh53= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 204.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh54= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 254.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh55= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 304.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh56= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 354.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh57= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 404.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh58= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 454.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh59= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 504.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh60= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 554.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh61= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 604.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh62= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 654.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh76= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 704.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh77= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 754.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh78= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 804.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh79= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 854.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh80= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 904.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh81= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 954.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh82= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 814.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh83= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 854.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh84= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 894.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh85= new CloudH(ASSETS_SPRITES, sf::Vector2f(935.f, 944.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  
  
  
  //columna izquierda
  cloudh63= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 60.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh64= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 110.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh65= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 160.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh66= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 210.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh67= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 260.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh68= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 310.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh69= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 360.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh70= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 410.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh71= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 560.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh86= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 704.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh87= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 654.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh88= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 604.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh89= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 754.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh90= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 804.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh91= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 854.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh92= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 904.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh93= new CloudH(ASSETS_SPRITES, sf::Vector2f(10.f, 954.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  
 

 
  //fila abajo
  cloudh16 = new CloudH(ASSETS_SPRITES, sf::Vector2f(10, 990), GAME_SCALE, 16, 16, 6, 3, window, world);
  cloudh17= new CloudH(ASSETS_SPRITES, sf::Vector2f(75, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh18 = new CloudH(ASSETS_SPRITES, sf::Vector2f(140, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh19= new CloudH(ASSETS_SPRITES, sf::Vector2f(205, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh20 = new CloudH(ASSETS_SPRITES, sf::Vector2f(270, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh21= new CloudH(ASSETS_SPRITES, sf::Vector2f(335, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh22= new CloudH(ASSETS_SPRITES, sf::Vector2f(400, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh23= new CloudH(ASSETS_SPRITES, sf::Vector2f(465, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh24 = new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh25 = new CloudH(ASSETS_SPRITES, sf::Vector2f(595, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh26 = new CloudH(ASSETS_SPRITES, sf::Vector2f(660, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh27 = new CloudH(ASSETS_SPRITES, sf::Vector2f(725, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh28 = new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh29 = new CloudH(ASSETS_SPRITES, sf::Vector2f(855, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh30 = new CloudH(ASSETS_SPRITES, sf::Vector2f(935, 990), GAME_SCALE, 16, 16, 4, 5, window, world);
  
//laberinto

  cloudh31 = new CloudH(ASSETS_SPRITES, sf::Vector2f(140, 130), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh32= new CloudH(ASSETS_SPRITES, sf::Vector2f(205, 130), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh33 = new CloudH(ASSETS_SPRITES, sf::Vector2f(270, 130), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh34 = new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 130), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh35 = new CloudH(ASSETS_SPRITES, sf::Vector2f(595, 130), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh36 = new CloudH(ASSETS_SPRITES, sf::Vector2f(660, 130), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh37 = new CloudH(ASSETS_SPRITES, sf::Vector2f(725, 130), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh38 = new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 130), GAME_SCALE, 16, 16, 4, 5, window, world);

  cloudh39 = new CloudH(ASSETS_SPRITES, sf::Vector2f(75, 230), GAME_SCALE, 16, 16, 6, 3, window, world);
  cloudh40= new CloudH(ASSETS_SPRITES, sf::Vector2f(140, 230), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh41 = new CloudH(ASSETS_SPRITES, sf::Vector2f(205, 230), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh42= new CloudH(ASSETS_SPRITES, sf::Vector2f(495, 230), GAME_SCALE, 16, 16, 4, 5, window, world);

 
  cloudh44 = new CloudH(ASSETS_SPRITES, sf::Vector2f(365, 230), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh45= new CloudH(ASSETS_SPRITES, sf::Vector2f(430, 230), GAME_SCALE, 16, 16, 4, 5, window, world);

  cloudh46= new CloudH(ASSETS_SPRITES, sf::Vector2f(560, 230), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh47 = new CloudH(ASSETS_SPRITES, sf::Vector2f(625, 230), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh48= new CloudH(ASSETS_SPRITES, sf::Vector2f(690, 230), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh49= new CloudH(ASSETS_SPRITES, sf::Vector2f(860, 330), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh50 = new CloudH(ASSETS_SPRITES, sf::Vector2f(860, 230), GAME_SCALE, 16, 16, 4, 5, window, world);
  
  cloudh51= new CloudH(ASSETS_SPRITES, sf::Vector2f(140, 330), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh99= new CloudH(ASSETS_SPRITES, sf::Vector2f(140, 280), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh98= new CloudH(ASSETS_SPRITES, sf::Vector2f(365, 330), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh100= new CloudH(ASSETS_SPRITES, sf::Vector2f(365, 280), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh101= new CloudH(ASSETS_SPRITES, sf::Vector2f(690, 280), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh102= new CloudH(ASSETS_SPRITES, sf::Vector2f(690, 330), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh103= new CloudH(ASSETS_SPRITES, sf::Vector2f(625, 330), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh104= new CloudH(ASSETS_SPRITES, sf::Vector2f(560, 330), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh105= new CloudH(ASSETS_SPRITES, sf::Vector2f(495, 330), GAME_SCALE, 16, 16, 4, 5, window, world);
 
 
  cloudh107= new CloudH(ASSETS_SPRITES, sf::Vector2f(365, 380), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh108= new CloudH(ASSETS_SPRITES, sf::Vector2f(140, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh109= new CloudH(ASSETS_SPRITES, sf::Vector2f(205, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh110= new CloudH(ASSETS_SPRITES, sf::Vector2f(270, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh111= new CloudH(ASSETS_SPRITES, sf::Vector2f(335, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh112= new CloudH(ASSETS_SPRITES, sf::Vector2f(400, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh113= new CloudH(ASSETS_SPRITES, sf::Vector2f(465, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh114= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh115= new CloudH(ASSETS_SPRITES, sf::Vector2f(595, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh106= new CloudH(ASSETS_SPRITES, sf::Vector2f(660, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh116= new CloudH(ASSETS_SPRITES, sf::Vector2f(725, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh117= new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 430), GAME_SCALE, 16, 16, 4, 5, window, world);
  
  
  cloudh94= new CloudH(ASSETS_SPRITES, sf::Vector2f(205.f, 480.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh95= new CloudH(ASSETS_SPRITES, sf::Vector2f(205.f, 530.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh96= new CloudH(ASSETS_SPRITES, sf::Vector2f(205.f, 580.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh97= new CloudH(ASSETS_SPRITES, sf::Vector2f(205.f, 630.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh82= new CloudH(ASSETS_SPRITES, sf::Vector2f(205.f, 680.f), GAME_SCALE, 16, 16, 4, 5, window, world);

  cloudh83= new CloudH(ASSETS_SPRITES, sf::Vector2f(335.f, 480.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh84= new CloudH(ASSETS_SPRITES, sf::Vector2f(335.f, 530.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh85= new CloudH(ASSETS_SPRITES, sf::Vector2f(335.f, 580.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  
  cloudh118= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 480), GAME_SCALE, 16, 16, 4, 5, window, world);
 
 
  cloudh121= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 680), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh122= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 730), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh123= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 840), GAME_SCALE, 16, 16, 4, 5, window, world);
   cloudh124= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 890), GAME_SCALE, 16, 16, 4, 5, window, world);
   cloudh119= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 940), GAME_SCALE, 16, 16, 4, 5, window, world);

  cloudh125= new CloudH(ASSETS_SPRITES, sf::Vector2f(335, 630), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh126= new CloudH(ASSETS_SPRITES, sf::Vector2f(400, 630), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh127= new CloudH(ASSETS_SPRITES, sf::Vector2f(465, 630), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh120= new CloudH(ASSETS_SPRITES, sf::Vector2f(530, 630), GAME_SCALE, 16, 16, 4, 5, window, world);

 cloudh128= new CloudH(ASSETS_SPRITES, sf::Vector2f(140.f, 530.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh129= new CloudH(ASSETS_SPRITES, sf::Vector2f(75.f, 530.f), GAME_SCALE, 16, 16, 4, 5, window, world);

  cloudh72= new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 480), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh73= new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 530), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh130= new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 580), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh131= new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 630), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh132= new CloudH(ASSETS_SPRITES, sf::Vector2f(790, 680), GAME_SCALE, 16, 16, 4, 5, window, world);
  
  cloudh134= new CloudH(ASSETS_SPRITES, sf::Vector2f(205, 890), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh135= new CloudH(ASSETS_SPRITES, sf::Vector2f(270, 890), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh136= new CloudH(ASSETS_SPRITES, sf::Vector2f(335, 890), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh137= new CloudH(ASSETS_SPRITES, sf::Vector2f(400, 890), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh138= new CloudH(ASSETS_SPRITES, sf::Vector2f(465, 890), GAME_SCALE, 16, 16, 4, 5, window, world);

  cloudh133= new CloudH(ASSETS_SPRITES, sf::Vector2f(335, 840), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh139= new CloudH(ASSETS_SPRITES, sf::Vector2f(335, 790), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh140= new CloudH(ASSETS_SPRITES, sf::Vector2f(270, 790), GAME_SCALE, 16, 16, 4, 5, window, world);
  cloudh141= new CloudH(ASSETS_SPRITES, sf::Vector2f(205, 790), GAME_SCALE, 16, 16, 4, 5, window, world);

 cloudh142= new CloudH(ASSETS_SPRITES, sf::Vector2f(75.f, 630.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh143= new CloudH(ASSETS_SPRITES, sf::Vector2f(75.f, 790.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 
 cloudh144= new CloudH(ASSETS_SPRITES, sf::Vector2f(725.f, 890.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh145= new CloudH(ASSETS_SPRITES, sf::Vector2f(725.f, 840.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh146= new CloudH(ASSETS_SPRITES, sf::Vector2f(790.f, 840.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh147= new CloudH(ASSETS_SPRITES, sf::Vector2f(855.f, 840.f), GAME_SCALE, 16, 16, 4, 5, window, world);

 cloudh148= new CloudH(ASSETS_SPRITES, sf::Vector2f(660.f, 580.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh149= new CloudH(ASSETS_SPRITES, sf::Vector2f(725.f, 580.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh150= new CloudH(ASSETS_SPRITES, sf::Vector2f(660.f, 630.f), GAME_SCALE, 16, 16, 4, 5, window, world);
 cloudh151= new CloudH(ASSETS_SPRITES, sf::Vector2f(660.f, 680.f), GAME_SCALE, 16, 16, 4, 5, window, world);
  text1 = new TextAsset(window, ASSETS_FONT, "Cerdito Volador",
  14, sf::Color::White, sf::Vector2f(50.f, 50.f));
  
  //fila arriba
  gameObjects->push_back(character1);
  //gameObjects->push_back(chest1);
  gameObjects->push_back(cloudh);
  gameObjects->push_back(cloudh2);
  gameObjects->push_back(cloudh3);
  gameObjects->push_back(cloudh4);
  gameObjects->push_back(cloudh5);
  gameObjects->push_back(cloudh6);
  gameObjects->push_back(cloudh7);
  gameObjects->push_back(cloudh8);
  gameObjects->push_back(cloudh9);
  gameObjects->push_back(cloudh10);
  gameObjects->push_back(cloudh11);
  gameObjects->push_back(cloudh12);
  gameObjects->push_back(cloudh13);
  gameObjects->push_back(cloudh14);
  gameObjects->push_back(cloudh15);

  //fila abajo
  gameObjects->push_back(cloudh16);
  gameObjects->push_back(cloudh17);
  gameObjects->push_back(cloudh18);
  gameObjects->push_back(cloudh19);
  gameObjects->push_back(cloudh20);
  gameObjects->push_back(cloudh21);
  gameObjects->push_back(cloudh22);
  gameObjects->push_back(cloudh23);
  gameObjects->push_back(cloudh24);
  gameObjects->push_back(cloudh25);
  gameObjects->push_back(cloudh26);
  gameObjects->push_back(cloudh27);
  gameObjects->push_back(cloudh28);
  gameObjects->push_back(cloudh29);
  gameObjects->push_back(cloudh30);

//laberinto
   gameObjects->push_back(cloudh31);
   gameObjects->push_back(cloudh32);
   gameObjects->push_back(cloudh33);
   gameObjects->push_back(cloudh34);
   gameObjects->push_back(cloudh35);
   gameObjects->push_back(cloudh36);
   gameObjects->push_back(cloudh37);
   gameObjects->push_back(cloudh38);

   gameObjects->push_back(cloudh39);
   gameObjects->push_back(cloudh40);
   gameObjects->push_back(cloudh41);
   gameObjects->push_back(cloudh42);

   gameObjects->push_back(cloudh44);
   gameObjects->push_back(cloudh45);
   gameObjects->push_back(cloudh46);
   gameObjects->push_back(cloudh47);
   gameObjects->push_back(cloudh48);
  gameObjects->push_back(cloudh49);
   gameObjects->push_back(cloudh50);
  gameObjects->push_back(cloudh51);
  gameObjects->push_back(cloudh98);
   gameObjects->push_back(cloudh99);
   gameObjects->push_back(cloudh100);
   gameObjects->push_back(cloudh101);
   gameObjects->push_back(cloudh102);
  gameObjects->push_back(cloudh103);
   gameObjects->push_back(cloudh104);
    gameObjects->push_back(cloudh105);
gameObjects->push_back(cloudh106);
gameObjects->push_back(cloudh107);
gameObjects->push_back(cloudh108);
gameObjects->push_back(cloudh109);
gameObjects->push_back(cloudh110);
gameObjects->push_back(cloudh111);
gameObjects->push_back(cloudh112);
gameObjects->push_back(cloudh113);

gameObjects->push_back(cloudh114);
gameObjects->push_back(cloudh115);
gameObjects->push_back(cloudh116);
gameObjects->push_back(cloudh117);

gameObjects->push_back(cloudh118);
gameObjects->push_back(cloudh119);
gameObjects->push_back(cloudh120);
gameObjects->push_back(cloudh121);
gameObjects->push_back(cloudh122);
gameObjects->push_back(cloudh123);
gameObjects->push_back(cloudh124);

gameObjects->push_back(cloudh125);
gameObjects->push_back(cloudh126);
gameObjects->push_back(cloudh127);

gameObjects->push_back(cloudh128);
gameObjects->push_back(cloudh129);
gameObjects->push_back(cloudh130);
gameObjects->push_back(cloudh131);
gameObjects->push_back(cloudh132);
gameObjects->push_back(cloudh133);
gameObjects->push_back(cloudh134);
gameObjects->push_back(cloudh135);
gameObjects->push_back(cloudh136);
gameObjects->push_back(cloudh137);
gameObjects->push_back(cloudh138);
gameObjects->push_back(cloudh139);
gameObjects->push_back(cloudh140);
gameObjects->push_back(cloudh141);

gameObjects->push_back(cloudh142);
gameObjects->push_back(cloudh143);
gameObjects->push_back(cloudh144);
gameObjects->push_back(cloudh145);
gameObjects->push_back(cloudh146);
gameObjects->push_back(cloudh147);
gameObjects->push_back(cloudh148);gameObjects->push_back(cloudh149);
gameObjects->push_back(cloudh150);gameObjects->push_back(cloudh151);
   //columna derecha
   gameObjects->push_back(cloudh52);
   gameObjects->push_back(cloudh53);
   gameObjects->push_back(cloudh54);
   gameObjects->push_back(cloudh55);
   gameObjects->push_back(cloudh56);
   gameObjects->push_back(cloudh57);
   gameObjects->push_back(cloudh58);
   gameObjects->push_back(cloudh59);
   gameObjects->push_back(cloudh60);
   gameObjects->push_back(cloudh61);
   gameObjects->push_back(cloudh62);
   gameObjects->push_back(cloudh74);
   gameObjects->push_back(cloudh75);
   gameObjects->push_back(cloudh76);
   gameObjects->push_back(cloudh77);
   gameObjects->push_back(cloudh78);
   gameObjects->push_back(cloudh79);
   gameObjects->push_back(cloudh80);
   gameObjects->push_back(cloudh81);
   gameObjects->push_back(cloudh82);
   gameObjects->push_back(cloudh83);
   gameObjects->push_back(cloudh84);
   gameObjects->push_back(cloudh85);

  //columna izquierda
   gameObjects->push_back(cloudh63);
   gameObjects->push_back(cloudh64);
   gameObjects->push_back(cloudh65);
   gameObjects->push_back(cloudh66);
   gameObjects->push_back(cloudh67);
   gameObjects->push_back(cloudh68);
   gameObjects->push_back(cloudh69);
   gameObjects->push_back(cloudh70);
   gameObjects->push_back(cloudh71);
   gameObjects->push_back(cloudh72);
   gameObjects->push_back(cloudh73);
   gameObjects->push_back(cloudh86);
   gameObjects->push_back(cloudh87);
   gameObjects->push_back(cloudh88);
   gameObjects->push_back(cloudh89);
   gameObjects->push_back(cloudh90);
   gameObjects->push_back(cloudh91);
   gameObjects->push_back(cloudh92);
   gameObjects->push_back(cloudh93);
   gameObjects->push_back(cloudh94);
   gameObjects->push_back(cloudh95);
   gameObjects->push_back(cloudh96);
   gameObjects->push_back(cloudh97);

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