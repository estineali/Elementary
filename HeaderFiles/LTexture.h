#pragma once

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <stdio.h>
#include <iostream>


class LTexture
{//Texture wrapper class
private:
    SDL_Texture* texture;
    int width;
    int height;
public:
    LTexture();
    ~LTexture();
    
    bool LoadFromFile( std::string path, SDL_Renderer* gRenderer );
    void Free(); //Will deallocate texture
    void SetColor( Uint8 red, Uint8 green, Uint8 blue ); //Set color modulation
    void SetBlendMode( SDL_BlendMode blending ); //Set blending
    void SetAlpha( Uint8 alpha ); //Set alpha modulation
    void Render( int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, 
        SDL_RendererFlip flip = SDL_FLIP_NONE, SDL_Renderer* gRenderer = NULL);
    int GetWidth();
    int GetHeight();
    
};
