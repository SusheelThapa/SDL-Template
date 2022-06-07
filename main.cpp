#include <iostream>

#ifdef __linux__
#include <SDL2/SDL.h>

#elif _WIN32
#include <SDL.h>


#endif

int main(int argc, char *args[])
{
    SDL_Window *window = nullptr;
    SDL_Surface *screen_surface = nullptr;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, SDL_WINDOW_SHOWN);

    screen_surface = SDL_GetWindowSurface(window);

    SDL_FillRect(screen_surface, nullptr, SDL_MapRGB(screen_surface->format, 0xFF, 0xFF, 0xFF));

    SDL_UpdateWindowSurface(window);

    SDL_Delay(2000);

    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}