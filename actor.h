/*
  Copyright 2016, Sjors van Gelderen
*/

class Actor
{
public:
    Actor();
    ~Actor();
    void Update(float _delta_time);
    void RegisterProp();
    void RegisterBody();

private:
    int propID = -1;
    int bodyID = -1;
};
