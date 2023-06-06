#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdbool.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 640
#define BOARD_SIZE 8
#define TILE_SIZE (WINDOW_WIDTH / BOARD_SIZE)

// Enumeration for the chess pieces
enum ChessPiece {
    EMPTY,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};

// Enumeration for the chess piece colors
enum ChessColor {
    WHITE,
    BLACK
};

// Structure for a chess piece
struct Piece {
    enum ChessPiece type;
    enum ChessColor color;
    SDL_Texture* texture;
};

// Function to load a chess piece texture
SDL_Texture* LoadChessPieceTexture(SDL_Renderer* renderer, const char* filepath) {
    SDL_Surface* surface = IMG_Load(filepath);
    if (!surface) {
        printf("Error loading texture: %s\n", IMG_GetError());
        return NULL;
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);

    return texture;
}

int main(int argc, char* argv[]) {
    // Initialize SDL and SDL_image
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);

    // Create the window
    SDL_Window* window = SDL_CreateWindow("Chess Board", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

    // Create the renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Set the draw color to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    // Clear the screen with the draw color
    SDL_RenderClear(renderer);

    // Create the chess pieces
    struct Piece pieces[BOARD_SIZE][BOARD_SIZE];
    for (int x = 0; x < BOARD_SIZE; x++) {
        for (int y = 0; y < BOARD_SIZE; y++) {
            if (y == 1) {
                // white pawn
                pieces[x][y].type = PAWN;
                pieces[x][y].color = BLACK;
                pieces[x][y].texture = LoadChessPieceTexture(renderer, "texture/black_pawn.png");
            } else if (y == 6) {
                // Create a black pawn
                pieces[x][y].type = PAWN;
                pieces[x][y].color = WHITE;
                pieces[x][y].texture = LoadChessPieceTexture(renderer, "texture/white_pawn.png");
            } else if ((x == 0 || x == 7) && (y == 0 || y == 7)) {
                // Create a rook
                pieces[x][y].type = ROOK;
                pieces[x][y].color = (y == 0) ? WHITE : BLACK;
                pieces[x][y].texture = LoadChessPieceTexture(renderer, (pieces[x][y].color == WHITE) ? "texture/black_rook.png" : "texture/white_rook.png");
            } else if ((x == 1 || x == 6) && (y == 0 || y == 7)) {
                // Create a knight
                pieces[x][y].type = KNIGHT;
                pieces[x][y].color = (y == 0) ? WHITE : BLACK;
                pieces[x][y].texture = LoadChessPieceTexture(renderer, (pieces[x][y].color == WHITE) ? "texture/black_knight.png" : "texture/white_knight.png");
            } else if ((x == 2 || x == 5) && (y == 0 || y == 7)) {
                // Create a bishop
                pieces[x][y].type = BISHOP;
                pieces[x][y].color = (y == 0) ? WHITE : BLACK;
                pieces[x][y].texture = LoadChessPieceTexture(renderer, (pieces[x][y].color == WHITE) ? "texture/black_bishop.png" : "texture/white_bishop.png");
            } else if (x == 3 && (y == 0 || y == 7)) {
                // Create a minister
                pieces[x][y].type = QUEEN;
                pieces[x][y].color = (y == 0) ? WHITE : BLACK;
                pieces[x][y].texture = LoadChessPieceTexture(renderer, (pieces[x][y].color == WHITE) ?  "texture/black_minister.png" : "texture/white_minister.png");
            } else if (x == 4 && (y == 0 || y == 7)) {
                // Create a king
                pieces[x][y].type = KING;
                pieces[x][y].color = (y == 0) ? WHITE : BLACK;
                pieces[x][y].texture = LoadChessPieceTexture(renderer, (pieces[x][y].color == WHITE) ? "texture/black_king.png" : "texture/white_king.png");
            } else {
                // Create an empty tile
                pieces[x][y].type = EMPTY;
                pieces[x][y].color = WHITE;
                pieces[x][y].texture = NULL;
            }
        }
    }

    // Draw the chessboard and pieces
    for (int x = 0; x < BOARD_SIZE; x++) {
        for (int y = 0; y < BOARD_SIZE; y++) {
            // Calculate the position of the tile
            int tileX = x * TILE_SIZE;
            int tileY = y * TILE_SIZE;

            // Set the draw color to white or black depending on the tile position
            if ((x + y) % 2 == 0) {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            } else {
                SDL_SetRenderDrawColor(renderer, 128, 128, 128, 255);
            }

            // Draw the tile
            SDL_Rect rect = { tileX, tileY, TILE_SIZE, TILE_SIZE };
            SDL_RenderFillRect(renderer, &rect);

            // Draw the chess piece on the tile if it exists
            if (pieces[x][y].texture != NULL) {
                SDL_Rect pieceRect = { tileX, tileY, TILE_SIZE, TILE_SIZE };
                SDL_RenderCopy(renderer, pieces[x][y].texture, NULL, &pieceRect);
            }
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
    for (int x = 0; x < BOARD_SIZE; x++) {
        for (int y = 0; y < BOARD_SIZE; y++) {
            if (pieces[x][y].texture != NULL) {
                SDL_DestroyTexture(pieces[x][y].texture);
            }
        }
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();

    return 0;
}
