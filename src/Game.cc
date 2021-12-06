#include "CommonHeaders.hh"
#include "Character.hh"
#include "CloudH.hh"
#include "tileGroup.hh"

// sf::RectangleShape *rectangle{new sf::RectangleShape(sf::Vector2f(300.f, 300.f))};
Character *character1{};
GameObject *bacon1{};
TileGroup *tileGroup{};

/* fila arriba
CloudH *cloudh001{};
CloudH *cloudh002{};
CloudH *cloudh003{};
CloudH *cloudh004{};
CloudH *cloudh005{};
CloudH *cloudh006{};
CloudH *cloudh007{};
CloudH *cloudh008{};
CloudH *cloudh009{};
CloudH *cloudh010{};
CloudH *cloudh011{};
CloudH *cloudh012{};
CloudH *cloudh013{};
CloudH *cloudh014{};
CloudH *cloudh015{};

// fila abajo
CloudH *cloudh016{};
CloudH *cloudh017{};
CloudH *cloudh018{};
CloudH *cloudh019{};
CloudH *cloudh020{};
CloudH *cloudh021{};
CloudH *cloudh022{};
CloudH *cloudh023{};
CloudH *cloudh024{};
CloudH *cloudh025{};
CloudH *cloudh026{};
CloudH *cloudh027{};
CloudH *cloudh028{};
CloudH *cloudh029{};
CloudH *cloudh030{};

// laberinto

CloudH *cloudh031{};
CloudH *cloudh032{};
CloudH *cloudh033{};
CloudH *cloudh034{};
CloudH *cloudh035{};
CloudH *cloudh036{};
CloudH *cloudh037{};
CloudH *cloudh038{};

CloudH *cloudh039{};
CloudH *cloudh040{};
CloudH *cloudh041{};
CloudH *cloudh042{};

CloudH *cloudh044{};
CloudH *cloudh045{};
CloudH *cloudh046{};
CloudH *cloudh047{};
CloudH *cloudh048{};
CloudH *cloudh049{};
CloudH *cloudh050{};
CloudH *cloudh051{};
CloudH *cloudh098{};
CloudH *cloudh099{};
CloudH *cloudh100{};
CloudH *cloudh101{};
CloudH *cloudh102{};
CloudH *cloudh103{};
CloudH *cloudh104{};
CloudH *cloudh105{};
CloudH *cloudh106{};
CloudH *cloudh107{};
CloudH *cloudh108{};
CloudH *cloudh109{};
CloudH *cloudh110{};
CloudH *cloudh111{};
CloudH *cloudh112{};
CloudH *cloudh113{};
CloudH *cloudh114{};
CloudH *cloudh115{};
CloudH *cloudh116{};
CloudH *cloudh117{};
CloudH *cloudh118{};
CloudH *cloudh119{};
CloudH *cloudh120{};
CloudH *cloudh121{};
CloudH *cloudh122{};
CloudH *cloudh123{};
CloudH *cloudh124{};
CloudH *cloudh125{};
CloudH *cloudh126{};
CloudH *cloudh127{};
CloudH *cloudh128{};
CloudH *cloudh129{};
CloudH *cloudh130{};
CloudH *cloudh131{};
CloudH *cloudh132{};
CloudH *cloudh133{};
CloudH *cloudh134{};
CloudH *cloudh135{};
CloudH *cloudh136{};
CloudH *cloudh137{};
CloudH *cloudh138{};
CloudH *cloudh139{};
CloudH *cloudh140{};
CloudH *cloudh141{};
CloudH *cloudh142{};
CloudH *cloudh143{};
CloudH *cloudh144{};
CloudH *cloudh145{};
CloudH *cloudh146{};
CloudH *cloudh147{};
CloudH *cloudh148{};
CloudH *cloudh149{};
CloudH *cloudh150{};
CloudH *cloudh151{};

// columna derecha
CloudH *cloudh052{};
CloudH *cloudh053{};
CloudH *cloudh054{};
CloudH *cloudh055{};
CloudH *cloudh056{};
CloudH *cloudh057{};
CloudH *cloudh058{};
CloudH *cloudh059{};
CloudH *cloudh060{};
CloudH *cloudh061{};
CloudH *cloudh062{};

CloudH *cloudh074{};
CloudH *cloudh075{};
CloudH *cloudh076{};
CloudH *cloudh077{};
CloudH *cloudh078{};
CloudH *cloudh079{};
CloudH *cloudh080{};
CloudH *cloudh081{};
CloudH *cloudh082{};
CloudH *cloudh083{};
CloudH *cloudh084{};
CloudH *cloudh085{};

// columna izquierda
CloudH *cloudh063{};
CloudH *cloudh064{};
CloudH *cloudh065{};
CloudH *cloudh066{};
CloudH *cloudh067{};
CloudH *cloudh068{};
CloudH *cloudh069{};
CloudH *cloudh070{};
CloudH *cloudh071{};
CloudH *cloudh072{};
CloudH *cloudh073{};
CloudH *cloudh086{};
CloudH *cloudh087{};
CloudH *cloudh088{};
CloudH *cloudh089{};
CloudH *cloudh090{};
CloudH *cloudh091{};
CloudH *cloudh092{};
CloudH *cloudh093{};
CloudH *cloudh094{};
CloudH *cloudh095{};
CloudH *cloudh096{};
CloudH *cloudh097{};
*/
TextAsset *text1{};

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
  gameClock = new sf::Clock();
  gravity = new b2Vec2(0.f, 0.f);
  world = new b2World(*gravity);
  drawPhysics = new DrawPhysics(window);


  tileGroup = new TileGroup(window, ASSETS_TILES, 16, 16, TILE_SCALE, 16, 19, ASSETS_TILE_GROUP_1);

  gameObjects = new std::vector<GameObject *>();
  gameObjectsDeleteList = new std::vector<GameObject *>();
  // wallObjects = new std::vector<WallObject *>();
    contactEventManager = new ContactEventManager(gameObjectsDeleteList);

  character1 = new Character(ASSETS_SPRITES, sf::Vector2f(500.f, 500.f), GAME_SCALE, 20, 16, 0, 5, 200.f, window, world);
  bacon1 = new GameObject(ASSETS_SPRITES, sf::Vector2f(300.f, 200.f), GAME_SCALE, 9, 16, 23, 4, b2BodyType::b2_staticBody, window, world);

  /*
  // fila arriba
  cloudh001 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20,  20), GAME_SCALE, 22, 14, 6, 3, window, world);
  cloudh002 = new CloudH(ASSETS_SPRITES, sf::Vector2f(85,  20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh003 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh004 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh005 = new CloudH(ASSETS_SPRITES, sf::Vector2f(280, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh006 = new CloudH(ASSETS_SPRITES, sf::Vector2f(345, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh007 = new CloudH(ASSETS_SPRITES, sf::Vector2f(410, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh008 = new CloudH(ASSETS_SPRITES, sf::Vector2f(475, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh009 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh010 = new CloudH(ASSETS_SPRITES, sf::Vector2f(605, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh011 = new CloudH(ASSETS_SPRITES, sf::Vector2f(670,  20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh012 = new CloudH(ASSETS_SPRITES, sf::Vector2f(735, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh013 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh014 = new CloudH(ASSETS_SPRITES, sf::Vector2f(865, 20), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh015 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945, 20), GAME_SCALE, 22, 14, 4, 5, window, world);

  // columna derecha
  cloudh074 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 54.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh075 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 104.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh052 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 154.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh053 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 204.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh054 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 254.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh055 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 304.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh056 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 354.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh057 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 404.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh058 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 454.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh059 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 504.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh060 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 554.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh061 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 604.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh062 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 654.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh076 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 704.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh077 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 754.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh078 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 804.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh079 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 854.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh080 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 904.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh081 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 954.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh082 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 814.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh083 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 854.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh084 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 894.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh085 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945.f, 944.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  // columna izquierda
  cloudh063 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 60.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh064 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 110.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh065 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 160.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh066 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 210.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh067 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 260.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh068 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 310.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh069 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 360.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh070 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 410.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh071 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 560.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh086 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 704.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh087 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 654.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh088 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 604.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh089 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 754.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh090 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 804.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh091 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 854.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh092 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 904.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh093 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20.f, 954.f), GAME_SCALE, 22, 16, 4, 5, window, world);

  // fila abajo
  cloudh016 = new CloudH(ASSETS_SPRITES, sf::Vector2f(20, 990), GAME_SCALE, 22, 16, 6, 3, window, world);
  cloudh017 = new CloudH(ASSETS_SPRITES, sf::Vector2f(85, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh018 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh019 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh020 = new CloudH(ASSETS_SPRITES, sf::Vector2f(280, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh021 = new CloudH(ASSETS_SPRITES, sf::Vector2f(345, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh022 = new CloudH(ASSETS_SPRITES, sf::Vector2f(410, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh023 = new CloudH(ASSETS_SPRITES, sf::Vector2f(475, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh024 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh025 = new CloudH(ASSETS_SPRITES, sf::Vector2f(605, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh026 = new CloudH(ASSETS_SPRITES, sf::Vector2f(670, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh027 = new CloudH(ASSETS_SPRITES, sf::Vector2f(735, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh028 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh029 = new CloudH(ASSETS_SPRITES, sf::Vector2f(865, 990), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh030 = new CloudH(ASSETS_SPRITES, sf::Vector2f(945, 990), GAME_SCALE, 22, 16, 4, 5, window, world);

  // laberinto

  cloudh031 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150, 130), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh032 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215, 130), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh033 = new CloudH(ASSETS_SPRITES, sf::Vector2f(280, 130), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh034 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 130), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh035 = new CloudH(ASSETS_SPRITES, sf::Vector2f(605, 130), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh036 = new CloudH(ASSETS_SPRITES, sf::Vector2f(670, 130), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh037 = new CloudH(ASSETS_SPRITES, sf::Vector2f(735, 130), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh038 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 130), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh039 = new CloudH(ASSETS_SPRITES, sf::Vector2f(85, 230), GAME_SCALE, 22, 14, 6, 3, window, world);
  cloudh040 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150, 230), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh041 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215, 230), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh042 = new CloudH(ASSETS_SPRITES, sf::Vector2f(505, 230), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh044 = new CloudH(ASSETS_SPRITES, sf::Vector2f(365, 230), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh045 = new CloudH(ASSETS_SPRITES, sf::Vector2f(440, 230), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh046 = new CloudH(ASSETS_SPRITES, sf::Vector2f(570, 230), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh047 = new CloudH(ASSETS_SPRITES, sf::Vector2f(635, 230), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh048 = new CloudH(ASSETS_SPRITES, sf::Vector2f(700, 230), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh049 = new CloudH(ASSETS_SPRITES, sf::Vector2f(880, 330), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh050 = new CloudH(ASSETS_SPRITES, sf::Vector2f(880, 330), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh051 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150, 330), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh099 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150, 280), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh098 = new CloudH(ASSETS_SPRITES, sf::Vector2f(375, 330), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh100 = new CloudH(ASSETS_SPRITES, sf::Vector2f(375, 280), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh101 = new CloudH(ASSETS_SPRITES, sf::Vector2f(700, 280), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh102 = new CloudH(ASSETS_SPRITES, sf::Vector2f(700, 330), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh103 = new CloudH(ASSETS_SPRITES, sf::Vector2f(640, 330), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh104 = new CloudH(ASSETS_SPRITES, sf::Vector2f(570, 330), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh105 = new CloudH(ASSETS_SPRITES, sf::Vector2f(505, 330), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh107 = new CloudH(ASSETS_SPRITES, sf::Vector2f(375, 380), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh108 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh109 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh110 = new CloudH(ASSETS_SPRITES, sf::Vector2f(280, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh111 = new CloudH(ASSETS_SPRITES, sf::Vector2f(345, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh112 = new CloudH(ASSETS_SPRITES, sf::Vector2f(410, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh113 = new CloudH(ASSETS_SPRITES, sf::Vector2f(475, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh114 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh115 = new CloudH(ASSETS_SPRITES, sf::Vector2f(605, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh106 = new CloudH(ASSETS_SPRITES, sf::Vector2f(670, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh116 = new CloudH(ASSETS_SPRITES, sf::Vector2f(735, 430), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh117 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 430), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh094 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215.f, 480.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh095 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215.f, 530.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh096 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215.f, 580.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh097 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215.f, 630.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh082 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215.f, 680.f), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh083 = new CloudH(ASSETS_SPRITES, sf::Vector2f(335.f, 480.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh084 = new CloudH(ASSETS_SPRITES, sf::Vector2f(335.f, 530.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh085 = new CloudH(ASSETS_SPRITES, sf::Vector2f(335.f, 580.f), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh118 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 480), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh121 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 680), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh122 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 730), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh123 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 840), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh124 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 890), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh119 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 940), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh125 = new CloudH(ASSETS_SPRITES, sf::Vector2f(345, 630), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh126 = new CloudH(ASSETS_SPRITES, sf::Vector2f(410, 630), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh127 = new CloudH(ASSETS_SPRITES, sf::Vector2f(475, 630), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh120 = new CloudH(ASSETS_SPRITES, sf::Vector2f(540, 630), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh128 = new CloudH(ASSETS_SPRITES, sf::Vector2f(150.f, 530.f), GAME_SCALE, 22, 16, 4, 5, window, world);
  cloudh129 = new CloudH(ASSETS_SPRITES, sf::Vector2f(85.f, 530.f), GAME_SCALE, 22, 16, 4, 5, window, world);

  cloudh072 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 480), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh073 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 530), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh130 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 580), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh131 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 630), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh132 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800, 680), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh134 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215, 890), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh135 = new CloudH(ASSETS_SPRITES, sf::Vector2f(280, 890), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh136 = new CloudH(ASSETS_SPRITES, sf::Vector2f(345, 890), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh137 = new CloudH(ASSETS_SPRITES, sf::Vector2f(410, 890), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh138 = new CloudH(ASSETS_SPRITES, sf::Vector2f(475, 890), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh133 = new CloudH(ASSETS_SPRITES, sf::Vector2f(345, 840), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh139 = new CloudH(ASSETS_SPRITES, sf::Vector2f(345, 790), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh140 = new CloudH(ASSETS_SPRITES, sf::Vector2f(280, 790), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh141 = new CloudH(ASSETS_SPRITES, sf::Vector2f(215, 790), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh142 = new CloudH(ASSETS_SPRITES, sf::Vector2f(85.f, 630.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh143 = new CloudH(ASSETS_SPRITES, sf::Vector2f(85.f, 790.f), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh144 = new CloudH(ASSETS_SPRITES, sf::Vector2f(735.f, 890.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh145 = new CloudH(ASSETS_SPRITES, sf::Vector2f(735.f, 840.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh146 = new CloudH(ASSETS_SPRITES, sf::Vector2f(800.f, 840.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh147 = new CloudH(ASSETS_SPRITES, sf::Vector2f(865.f, 840.f), GAME_SCALE, 22, 14, 4, 5, window, world);

  cloudh148 = new CloudH(ASSETS_SPRITES, sf::Vector2f(670.f, 580.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh149 = new CloudH(ASSETS_SPRITES, sf::Vector2f(735.f, 580.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh150 = new CloudH(ASSETS_SPRITES, sf::Vector2f(670.f, 630.f), GAME_SCALE, 22, 14, 4, 5, window, world);
  cloudh151 = new CloudH(ASSETS_SPRITES, sf::Vector2f(670.f, 680.f), GAME_SCALE, 22, 14, 4, 5, window, world);
   */
  text1 = new TextAsset(window, ASSETS_FONT, "Cerdito Volador", 14, sf::Color::White, sf::Vector2f(50.f, 50.f));
  /*
  // fila arriba
  wallObjects->push_back(cloudh001);
  wallObjects->push_back(cloudh002);
  wallObjects->push_back(cloudh003);
  wallObjects->push_back(cloudh004);
  wallObjects->push_back(cloudh005);
  wallObjects->push_back(cloudh006);
  wallObjects->push_back(cloudh007);
  wallObjects->push_back(cloudh008);
  wallObjects->push_back(cloudh009);
  wallObjects->push_back(cloudh010);
  wallObjects->push_back(cloudh011);
  wallObjects->push_back(cloudh012);
  wallObjects->push_back(cloudh013);
  wallObjects->push_back(cloudh014);
  wallObjects->push_back(cloudh015);

  // fila abajo
 wallObjects->push_back(cloudh016);
 wallObjects->push_back(cloudh017);
 wallObjects->push_back(cloudh018);
 wallObjects->push_back(cloudh019);
 wallObjects->push_back(cloudh020);
 wallObjects->push_back(cloudh021);
 wallObjects->push_back(cloudh022);
 wallObjects->push_back(cloudh023);
 wallObjects->push_back(cloudh024);
 wallObjects->push_back(cloudh025);
 wallObjects->push_back(cloudh026);
 wallObjects->push_back(cloudh027);
 wallObjects->push_back(cloudh028);
 wallObjects->push_back(cloudh029);
 wallObjects->push_back(cloudh030);
  // laberinto0
 wallObjects->push_back(cloudh031);
 wallObjects->push_back(cloudh032);
 wallObjects->push_back(cloudh033);
 wallObjects->push_back(cloudh034);
 wallObjects->push_back(cloudh035);
 wallObjects->push_back(cloudh036);
 wallObjects->push_back(cloudh037);
 wallObjects->push_back(cloudh038);

 wallObjects->push_back(cloudh039);
 wallObjects->push_back(cloudh040);
 wallObjects->push_back(cloudh041);
 wallObjects->push_back(cloudh042);

 wallObjects->push_back(cloudh044);
 wallObjects->push_back(cloudh045);
 wallObjects->push_back(cloudh046);
 wallObjects->push_back(cloudh047);
 wallObjects->push_back(cloudh048);
 wallObjects->push_back(cloudh049);
 wallObjects->push_back(cloudh050);
 wallObjects->push_back(cloudh051);
 wallObjects->push_back(cloudh098);
 wallObjects->push_back(cloudh099);
 wallObjects->push_back(cloudh100);
 wallObjects->push_back(cloudh101);
 wallObjects->push_back(cloudh102);
 wallObjects->push_back(cloudh103);
 wallObjects->push_back(cloudh104);
 wallObjects->push_back(cloudh105);
 wallObjects->push_back(cloudh106);
 wallObjects->push_back(cloudh107);
 wallObjects->push_back(cloudh108);
 wallObjects->push_back(cloudh109);
 wallObjects->push_back(cloudh110);
 wallObjects->push_back(cloudh111);
 wallObjects->push_back(cloudh112);
 wallObjects->push_back(cloudh113);

 wallObjects->push_back(cloudh114);
 wallObjects->push_back(cloudh115);
 wallObjects->push_back(cloudh116);
 wallObjects->push_back(cloudh117);

 wallObjects->push_back(cloudh118);
 wallObjects->push_back(cloudh119);
 wallObjects->push_back(cloudh120);
 wallObjects->push_back(cloudh121);
 wallObjects->push_back(cloudh122);
 wallObjects->push_back(cloudh123);
 wallObjects->push_back(cloudh124);

 wallObjects->push_back(cloudh125);
 wallObjects->push_back(cloudh126);
 wallObjects->push_back(cloudh127);

 wallObjects->push_back(cloudh128);
 wallObjects->push_back(cloudh129);
 wallObjects->push_back(cloudh130);
 wallObjects->push_back(cloudh131);
 wallObjects->push_back(cloudh132);
 wallObjects->push_back(cloudh133);
 wallObjects->push_back(cloudh134);
 wallObjects->push_back(cloudh135);
 wallObjects->push_back(cloudh136);
 wallObjects->push_back(cloudh137);
 wallObjects->push_back(cloudh138);
 wallObjects->push_back(cloudh139);
 wallObjects->push_back(cloudh140);
 wallObjects->push_back(cloudh141);

 wallObjects->push_back(cloudh142);
 wallObjects->push_back(cloudh143);
 wallObjects->push_back(cloudh144);
 wallObjects->push_back(cloudh145);
 wallObjects->push_back(cloudh146);
 wallObjects->push_back(cloudh147);
 wallObjects->push_back(cloudh148);
 wallObjects->push_back(cloudh149);
 wallObjects->push_back(cloudh150);
 wallObjects->push_back(cloudh151);

  // columna derecha
 wallObjects->push_back(cloudh052);
 wallObjects->push_back(cloudh053);
 wallObjects->push_back(cloudh054);
 wallObjects->push_back(cloudh055);
 wallObjects->push_back(cloudh056);
 wallObjects->push_back(cloudh057);
 wallObjects->push_back(cloudh058);
 wallObjects->push_back(cloudh059);
 wallObjects->push_back(cloudh060);
 wallObjects->push_back(cloudh061);
 wallObjects->push_back(cloudh062);
 wallObjects->push_back(cloudh074);
 wallObjects->push_back(cloudh075);
 wallObjects->push_back(cloudh076);
 wallObjects->push_back(cloudh077);
 wallObjects->push_back(cloudh078);
 wallObjects->push_back(cloudh079);
 wallObjects->push_back(cloudh080);
 wallObjects->push_back(cloudh081);
 wallObjects->push_back(cloudh082);
 wallObjects->push_back(cloudh083);
 wallObjects->push_back(cloudh084);
 wallObjects->push_back(cloudh085);

  // columna izquierda
 wallObjects->push_back(cloudh063);
 wallObjects->push_back(cloudh064);
 wallObjects->push_back(cloudh065);
 wallObjects->push_back(cloudh066);
 wallObjects->push_back(cloudh067);
 wallObjects->push_back(cloudh068);
 wallObjects->push_back(cloudh069);
 wallObjects->push_back(cloudh070);
 wallObjects->push_back(cloudh071);
 wallObjects->push_back(cloudh072);
 wallObjects->push_back(cloudh073);
 wallObjects->push_back(cloudh086);
 wallObjects->push_back(cloudh087);
 wallObjects->push_back(cloudh088);
 wallObjects->push_back(cloudh089);
 wallObjects->push_back(cloudh090);
 wallObjects->push_back(cloudh091);
 wallObjects->push_back(cloudh092);
 wallObjects->push_back(cloudh093);
 wallObjects->push_back(cloudh094);
 wallObjects->push_back(cloudh095);
 wallObjects->push_back(cloudh096);
 wallObjects->push_back(cloudh097);
  */
}

Game::~Game()
{
}

void Game::Start()
{
  character1->setTagName("cerdito");
  bacon1->setTagName("bacon");
  gameObjects->push_back(character1);
  gameObjects->push_back(bacon1);
  uint32 flags{};
  flags += b2Draw::e_shapeBit;
  // flags += b2Draw::e_pairBit;
  world->SetContactListener(contactEventManager);
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
      if (event->type == sf::Event::Closed)
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
  /*for (auto &wallObject : *wallObjects)
  {
    wallObject->Update(deltaTime);
  }*/
  for (auto &gameObject : *gameObjects)
  {
    gameObject->Update(deltaTime);
  }
}

void Game::Render()
{
  for (auto &gameObjectPendingDelete : *gameObjectsDeleteList)
  {
    gameObjects->erase(std::remove(gameObjects->begin(), gameObjects->end(), gameObjectPendingDelete), gameObjects->end());
    delete gameObjectPendingDelete;
  }
  gameObjectsDeleteList->clear();

  window->clear(sf::Color{0, 0, 0, 0});
  Draw();
  window->display();
}

void Game::Draw()
{
  tileGroup->Draw();
  /*for (auto &wallObject : *wallObjects)
  {
    wallObject->Draw();
  }*/
  for (auto &gameObject : *gameObjects)
  {
    gameObject->Draw();
  }
  text1->Draw();
  world->DebugDraw();
}

void Game::InputHandle()
{
}