#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

constexpr int SCREEN_WIDTH = 800;
constexpr int SCREEN_HEIGHT = 600;


int main()
{
    SDL_Window *window = nullptr;
    SDL_Surface *screen_surface = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        printf("Error %s:", SDL_GetError());
    else
    {
        window = SDL_CreateWindow("Кораблик",
                                  SDL_WINDOWPOS_CENTERED_MASK,
                                  SDL_WINDOWPOS_CENTERED_MASK, 
                                  SCREEN_WIDTH,
                                  SCREEN_HEIGHT,
                                  SDL_WINDOW_OPENGL);

        screen_surface = SDL_GetWindowSurface(window);

        SDL_FillRect(screen_surface, nullptr, SDL_MapRGB(screen_surface->format, 0xff, 0xff, 0xff));

        SDL_UpdateWindowSurface(window);

        SDL_Delay(1000);
    };

    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}