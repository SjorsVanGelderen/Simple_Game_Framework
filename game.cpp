/*
  Copyright 2016, Sjors van Gelderen
*/

#include "game.h"

Game::Game(int _width, int _height, std::string _title)
{
    width =_width;
    height = _height;
    title = _title;
    
    clock = sf::Clock();
    window = new sf::RenderWindow(sf::VideoMode(width, height), title);
}

Game::~Game()
{
    
}

//Main game loop
void Game::Run()
{
    AddProp();
    
    while(window->isOpen())
    {
        float delta_time = clock.restart().asSeconds();
        
        sf::Event event;
        while(window->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window->close();
            }
        }

        for(auto prop : props)
        {
            prop.Update(delta_time);
        }

        for(auto body : bodies)
        {
            body.Update(delta_time);
        }
        
        for(auto actor : actors)
        {
            actor.Update(delta_time);
        }
        
        window->clear();
        
        for(auto prop : props)
        {
            prop.Draw();
        }
        
        window->display();
    }

    Terminate();
}

//Terminate all resources
void Game::Terminate()
{
    delete window;
}

//Create a new actor
void Game::AddActor()
{
    actors.push_back(Actor());
}

//Create a new prop
void Game::AddProp()
{
    props.push_back(Prop(window));
}

//Create a new body
void Game::AddBody()
{
    bodies.push_back(Body());
}
