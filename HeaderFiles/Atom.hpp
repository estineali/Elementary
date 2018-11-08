//
//  Atom.hpp
//  Element War
//
//  Created by Ali Shujjat on 07/11/2018.
//  Copyright © 2018 Ali Shujjat. All rights reserved.
//

#ifndef Atom_hpp
#define Atom_hpp

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

#endif /* Atom_hpp */
