/*
  Copyright 2016, Sjors van Gelderen
*/

#include "game.h"

Game::Game(int _width, int _height, std::string _title)
{
    width =_width;
    height = _height;
    title = _title;
}

Game::~Game()
{
    
}

void Game::Run()
{
    sf::Clock clock;
    sf::RenderWindow window(sf::VideoMode(width, height), title);
    
    while(window.isOpen())
    {
        sf::Time delta_time = clock.restart();
        
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        
        window.clear();
        //Draw stuff
        window.display();
    }
}
