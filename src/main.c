#include <raylib.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {

};

int main(int argc, char **argv) {
    int winWidth, winHeight;
    winWidth = winHeight = 750;

    // Argument-passed resolution.
    if(argc > 1) 
        winHeight = winWidth = atoi(argv[1]);

    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(winWidth, winHeight, "[dev / 0.0.1] blast");

    // Game Loop!
    while(!WindowShouldClose()) {
        BeginDrawing();
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}