/*
  Copyright 2016, Sjors van Gelderen
*/

#include "game.h"

#define WIDTH 1280
#define HEIGHT 720
#define TITLE "Game"

int main()
{
    Game game(WIDTH, HEIGHT, TITLE);
    game.Run();
    
    return EXIT_SUCCESS;
}
