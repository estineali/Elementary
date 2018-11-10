#pragma once

#include <stdio.h>

struct Position
{
    float x;
    float y;
    Position(float p_x, float p_y)
    {
        x = p_x;
        y = p_y;
    }
};


class Atom
{
protected:
    bool is_active;
    Position pos;
    int width;
    int height;

    
public:
    Atom();
    Atom(LTexture* image, Position p_pos);
    virtual ~Atom();
    void set_alive(bool);
    bool get_alive();
    int get_height();
    int get_width();
    Position get_position();
    virtual void Move(int direction) = 0;
    virtual void Move() = 0;
    virtual void Render(long int& frame, SDL_Renderer* gRenderer, bool debug) = 0;
};
