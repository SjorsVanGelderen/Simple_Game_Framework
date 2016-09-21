/*
  Copyright 2016, Sjors van Gelderen
*/

class Body
{
public:
    Body();
    ~Body();
    void OnCollision(Body _other_body);
    void Update(float _delta_time);

private:
};
