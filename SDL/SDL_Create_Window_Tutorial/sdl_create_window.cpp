// File which creates an SDL window on the screen
// An empty window withe title My First SDL Window is created on the screen


# include "SDL.h"
# include<iostream>

int main(int argc, char* argv[]){
    using std::cout;
    using std::endl;

    const int WINDOW_WIDTH = 640;
    const int WINDOW_HEIGHT = 480;

    cout << "Starting the SDL tutorials" << endl;

    // Declaring an SDL pointer
    // A further function will be used to create the appropriate window
    SDL_Window *window;

    // Function to initiliaze teh SDL library
    SDL_Init(SDL_INIT_VIDEO);

    // Creating the SDL_Window
    window = SDL_CreateWindow(
        "My First SDL Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_OPENGL
    );

    // The argumenst to the above function are as follows:
    // The title of the window,
    // Initial x-position of the window(SDL_WINDOWPOS_UNDEFINED or
    // SDL_WINDOWPOS_CENTERED)
    // Initial y-position of the window(SDL_WINDOWPOS_UNDEFINED or
    // SDL_WINDOWPOS_CENTERED)
    // width of window in screen co-ordinates
    // height of window in screen coordinates
    // SDL - Flags : ToDo

    // If there was a failure in creating the window
    if (window == NULL){
        cout << "Failed to create the window" << endl;
        cout << SDL_GetError << endl;
        return 1;
    }


    // Window creation was successful
    // Display window for 5 secons
    SDL_Delay(5000);

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Do clean up afterwards
    SDL_Quit();
    return 0;
}
