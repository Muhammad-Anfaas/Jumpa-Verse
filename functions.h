#pragma once
#include <SDL2/SDL.h>

bool init(SDL_Window*& Window, SDL_Renderer*& renderer);
void close(SDL_Window* window, SDL_Renderer* renderer);