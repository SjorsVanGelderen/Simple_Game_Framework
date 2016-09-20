/*
  Copyright 2016, Sjors van Gelderen
*/

#include "game.h"

#define WIDTH 1600
#define HEIGHT 900
#define TITLE "Game"

int main()
{
    Game game(WIDTH, HEIGHT, TITLE);
    game.Run();
    return 0;
}
