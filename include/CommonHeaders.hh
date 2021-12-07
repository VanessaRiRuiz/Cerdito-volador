#include "Game.hh"
#include "Constants.hh"
#include "InputSystem.hh"
#include "Animation.hh"
#include "TextAsset.hh"
#include "Score.hh"

enum GameState {
    MENU,
    GAME,
    PAUSE,
    GAMEOVER
};