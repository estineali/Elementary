// Elementary.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu


#include <iostream>
#include <SDL.h>
#include <SDL_main.h>

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720; 

int main(int argc, char** argv)
{
    std::cout << "Elementary: The Game." << std::endl;

    SDL_Window* window = NULL;
    SDL_Surface* surface = NULL;

    //Initializing SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL Could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
    }
    else
    {
        //Initializing SDL Window 
        window = SDL_CreateWindow(
            "Window Name",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            SCREEN_WIDTH,
            SCREEN_HEIGHT,
            SDL_WINDOW_SHOWN);

        if (window == NULL)
        {   
            std::cout << "Window could not be created. Error: " << SDL_GetError() << std::endl;
        }
        else
        {
            //Initializing the surface of the screen
            surface = SDL_GetWindowSurface(window);
            
            //Coloring the surface a dark pink
            SDL_FillRect(
                surface,
                NULL,
                SDL_MapRGB(surface->format, 0x9F, 0x31, 0x5B));

            //Update the surface 
            SDL_UpdateWindowSurface(window);

            //Wait 10 seconds 
            SDL_Delay(10000);


            /* LAZY FOO EXPLANATION 

                If the window was created successfully, we want to get the window's surface so we can draw to it. SDL_GetWindowSurface does just this.

                To keep this tutorial simple, all we're going to do here is fill the window's surface white using SDL_FillRect. 
                Don't worry too much about this function here. This tutorial is only concerned about getting a window to pop up.

                An important thing to know about rendering is that just because you've drawn something to the screen surface doesn't mean you'll see it. 
                After you've done all your drawing you need to update the window so it shows everything you drew. A call to SDL_UpdateWindowSurface will do this.

                If all we do is create the window, fill it, and update it, all we're going to see is a window flash for a second and then close. 
                To keep it from disappearing, we'll call SDL_Delay. SDL_Delay will wait for a given amount of milliseconds. 
                A millisecond is 1/1000 of a second. This means the code above will make the window wait for 2000 1/1000 of a second or 2 seconds.

                An important thing to note is that when SDL is delaying, it cannot accept input from the keyboard or mouse. 
                Don't panic when you run this program and it doesn't respond. We haven't given it the code to handle the mouse and keyboard. 

            */


            SDL_DestroyWindow(window);
            SDL_Quit();


        }
    }
    return 0;
}