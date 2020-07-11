#pragma once
#include<iostream>
#include<stdio.h>
#include<SDL.h>
#include<SDL_image.h>

using namespace std;

class LTexture
{
private:
	SDL_Texture* texture;
	int width;
	int height;

public:
	/*-CTORS*/
	LTexture();
	~LTexture();

	/*METHODS*/
	bool LoadFromFile(string, SDL_Renderer*, bool flagColorKey = true, 
						Uint8 redColorKey = 0, Uint8 greenColorKey = 0xFF, Uint8 blueColorKey = 0xFF);        ///takes arguments to ColorKey
	void RenderTexture(int x, int y, SDL_Renderer* gRenderer, SDL_Rect* clip = NULL, 
					SDL_RendererFlip flip = SDL_FLIP_NONE, double angle = 0.0, SDL_Point* center = NULL, float scale = 1);
	void render(int x, int y, SDL_Renderer* rend, SDL_Rect* clip = NULL);
	void Free();
	void setBlendMode(SDL_BlendMode blending); //Set blending
	void setAlpha(Uint8 alpha); //Set alpha modulation
	int GetWidth();
	int GetHeight();
};

