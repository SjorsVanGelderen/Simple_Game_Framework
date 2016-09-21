/*
  Copyright 2016, Sjors van Gelderen
*/

#include <SFML/Graphics.hpp>

class Prop
{
public:
    Prop(sf::RenderWindow* _window);
    ~Prop();
    void Update(float _delta_time);
    void Draw();
    //void Move(sf::Vector2 _displacement);

private:
    //sf::Vector2 position;
    //sf::Vector2 velocity;
    
    sf::RenderWindow* window;
};
