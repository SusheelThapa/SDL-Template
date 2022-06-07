#include "window.hpp"

int main()
{
    // An object of window class
    Window window("SDL");

    /*Game Loop*/
    while (!window.isWindowClosed())
    {
        // Handle the events
        window.handleEvent();

        // Clear the window
        window.clear({0, 255, 255, 255});

        // Present the window.
        window.present();
    }

    return 0;
}