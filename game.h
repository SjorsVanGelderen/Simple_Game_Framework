/*
  Copyright 2016, Sjors van Gelderen
*/

#include <string.h>
#include <SFML/Graphics.hpp>

#include "sprite.h"

class Game
{
public:
    Game(int _width, int _height, std::string _title);
    ~Game();
    void Run();

private:
    int width;
    int height;
    std::string title;
};
