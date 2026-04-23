#pragma once 
#include<SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include<iostream>
#include<string>
#include<vector>
#include<SDL2/SDL_image.h>
/*

vector of subg --> than later we create a distance

*/


 class ground_Class
 {
    private:
    int x;
    int y;
    int w;
    int h;
    int divw=0;//Divide width into 20px parts and get widths
     std::vector <SDL_Rect> ground ;
     SDL_Texture* groundTexture;
     
     int perboxwidth=20;
     int perboxheight=20;
     int perboxX=20;
     int perboxY;
     



    public:
        
        ground_Class() : x(0), y(0), w(0), h(0), divw(0) {}
        ground_Class(int ax,int ay,int aw,int ah,SDL_Renderer*renderer,const std::string &texturePath)
        {
            x=ax;
            y=ay;
            w=aw;
            h=ah;
            divw=w/20;

            ground.resize(divw);
           

            SDL_Texture* texture = loadTexture(renderer, texturePath);


            for (int i=0;i<divw;i++)
            {
                ground[i]={x + i*50,y,50,50};
                groundTexture=texture;
            }
        }

        SDL_Texture* loadTexture(SDL_Renderer* renderer, const std::string& path)
    {
        SDL_Surface* surface = IMG_Load(path.c_str());  // <-- changed
        if (!surface)
        {
            std::cerr << "Unable to load image: " << SDL_GetError() << std::endl;
            return nullptr;
        }

        SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_FreeSurface(surface);  // Free surface after creating texture
        if (!texture)
        {
            std::cerr << "Unable to create texture: " << SDL_GetError() << std::endl;
        }

        return texture;
    }

    void render(SDL_Renderer* renderer)
    {
        // Loop through all ground elements and render the corresponding texture
        for (int i = 0; i < divw; i++)
        {
            SDL_RenderCopy(renderer, groundTexture, NULL, &ground[i]);  // Render texture on each SDL_Rect
        }
    }
     ~ground_Class()
    {
        if (groundTexture)
    {
        SDL_DestroyTexture(groundTexture);
    }
    }

    
 };


   