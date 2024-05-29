#include "Pacman.h"
#include "Pill.h"
#include "Maze.h"
#include "Config.h"
#include "raylib.h"
#include <iostream>
using namespace std;

int main() {
    // Inicializar la ventana
    InitWindow(screenWidth, screenHeight, "Pac-Man con Raylib");

    // Inicializar Pac-Man
    Pacman pacman;
    InitPacman(pacman);

    // Inicializar p�ldoras
    Pill pills[gridWidth][gridHeight];
    InitPills(pills);

    SetTargetFPS(60); // Configurar el FPS objetivo

    while (!WindowShouldClose()) {
        // Movimiento del Pac-Man
        HandleInput(pacman);
        UpdatePacman(pacman);

        // Comprobar colisiones con las p�ldoras
        CheckPillCollision(pacman, pills);

        // Dibujar todo
        BeginDrawing();  // Aseg�rate de usar BeginDrawing() en lugar de Begin
        ClearBackground(BLACK);

        // Dibujar laberinto
        DrawMaze();

        // Dibujar p�ldoras
        DrawPills(pills);

        // Dibujar Pac-Man
        DrawPacman(pacman);

        EndDrawing();  // Aseg�rate de usar EndDrawing() en lugar de End
    }

    // Cerrar la ventana y liberar recursos
    CloseWindow();

    return 0;
}
