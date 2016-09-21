/*
  Copyright 2016, Sjors van Gelderen
*/

#include <string.h>
#include <vector>
#include <SFML/Graphics.hpp>

#include "actor.h"
#include "prop.h"
#include "body.h"

class Game
{
public:
    Game(int _width, int _height, std::string _title);
    ~Game();
    void Run();

private:
    void Terminate();
    
    void AddActor();
    void AddProp();
    void AddBody();
    
    int width;
    int height;
    std::string title;
    std::vector<Actor> actors;
    std::vector<Prop> props;
    std::vector<Body> bodies;

    sf::Clock clock;
    sf::RenderWindow* window;
};
