#pragma once

#include <stdio.h>


class Atom
{
protected:
    bool alive;
    int x;
    int y;
    int width;
    int height;

    
public:
    Atom(LTexture* image, float x, float y);
    Atom();
    virtual ~Atom();
    void SetAlive(bool);
    bool GetAlive();
    int GetWidth();
    int GetHeight();
    float GetX();
    float GetY();
    virtual void Move(int direction);
    virtual void Move();
    virtual void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
};
