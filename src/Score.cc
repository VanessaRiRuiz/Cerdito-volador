#include "Score.hh"
#include "ContactEventManager.hh"
#include "GameObject.hh"
#include<iostream>

ContactEventManager *goB{};
b2Contact *contact{};
int point = 0;

Score::Score(const char* fontUrl, std::string text, unsigned int fontSize, sf::Vector2f* position, sf::Color* fillColor, sf::RenderWindow*& window)
{
    font->loadFromFile(fontUrl);
    scoreText->setFont(*font);
    scoreText->setString(text + " 0");
    scoreText->setCharacterSize(fontSize);
    scoreText->setFillColor(*fillColor);
    this->text = text;
    this->window = window;

    scoreText->setPosition(*position);
}

Score::~Score()
{

}

void Score::Update()
{
    window->draw(*scoreText);
}

void Score::AddPoints(unsigned int points)
{
    score += points;
    scoreText->setString(text + std::to_string(score));
}


void Score::Draw()
{
  window->draw(*scoreText);
}