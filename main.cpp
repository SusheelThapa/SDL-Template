#include "window.hpp"
#include "texture.hpp"

int main(int argc, char *argv[])
{
    // An object of window class with 400 * 400 dimension
    Window window("SDL");

    // An instance of texture class
    Texture texture;

    // Load images in the Texture class object
    texture.loadFromFile(window, "resources/images/sdl-logo.png");

    // Parameter to been while rendering the texture
    SDL_Rect render_quad = {0, 0, texture.getWidth(), texture.getHeight()};
    SDL_Rect render_rect = {0, 0, render_quad.w / 2, render_quad.h};
    SDL_Point center_of_rotation = {window.getWidth() / 2, window.getHeight() / 2};

    /*Game Loop*/
    while (!window.isWindowClosed())
    {
        // Handle the events
        window.handleEvent();

        // Clear the window
        window.clear({0, 255, 255, 255});

        /* Display the image we have  loaded over the screen of window we have created*/
        // Out of below render method run one at a time so that you can know what each argument does
        texture.render(window, 0, 0, nullptr, nullptr);
        texture.render(window, 0, 0, nullptr, &render_quad);
        texture.render(window, 0, 0, &render_rect, &render_quad);
        texture.render(window, 0, 0, nullptr, &render_quad, 60, &center_of_rotation, SDL_FLIP_HORIZONTAL);
        texture.render(window, 0, 0, nullptr, &render_quad, -49, &center_of_rotation, SDL_FLIP_VERTICAL);

        // Present the window.
        window.present();
    }

    return 0;
}