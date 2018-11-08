//
//  LTexture.hpp
//  Element War
//
//  Created by Ali Shujjat on 07/11/2018.
//  Copyright © 2018 Ali Shujjat. All rights reserved.
//

#ifndef LTexture_hpp
#define LTexture_hpp


#pragma once
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <stdio.h>
#include <iostream>

//Texture wrapper class
class LTexture
{
private:
    SDL_Texture* texture;
    int width;
    int height;
public:
    LTexture();
    ~LTexture();
    
    bool LoadFromFile( std::string path, SDL_Renderer* gRenderer );
    
    //Will deallocate texture
    void Free();
    
    //Set color modulation
    void SetColor( Uint8 red, Uint8 green, Uint8 blue );
    
    //Set blending
    void SetBlendMode( SDL_BlendMode blending );
    
    //Set alpha modulation
    void SetAlpha( Uint8 alpha );
    
    void Render( int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE, SDL_Renderer* gRenderer = NULL);
    
    int GetWidth();
    int GetHeight();
    
};

#endif /* LTexture_hpp */
