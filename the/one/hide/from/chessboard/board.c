#include <SDL2/SDL.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 640
#define BOARD_SIZE 8
#define TILE_SIZE (WINDOW_WIDTH / BOARD_SIZE)

int main(int argc, char* argv[]) {
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);

    // Create the window
    SDL_Window* window = SDL_CreateWindow("Chessboard", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

    // Create the renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Set the draw color to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    // Clear the screen with the draw color
    SDL_RenderClear(renderer);

    // Draw the chessboard
    for (int x = 0; x < BOARD_SIZE; x++) {
        for (int y = 0; y < BOARD_SIZE; y++) {
            // Calculate the position of the tile
            int tileX = x * TILE_SIZE;
            int tileY = y * TILE_SIZE;

            // Set the draw color to white or black depending on the tile position
            if ((x + y) % 2 == 0) {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            } else {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            }

            // Draw the tile
            SDL_Rect rect = { tileX, tileY, TILE_SIZE, TILE_SIZE };
            SDL_RenderFillRect(renderer, &rect);
        }
    }

    // Update the screen
    SDL_RenderPresent(renderer);

    // Wait for the user to close the window
    bool quit = false;
    SDL_Event event;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
