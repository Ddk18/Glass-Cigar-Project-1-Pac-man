#include "raylib.h"
#include "Pacman.h"
#include "Pill.h"
#include "Maze.h"
#include "Config.h"
#include <iostream>

using namespace std;

int main() {
    // Inicializar la ventana
    InitWindow(screenWidth, screenHeight, "Pac-Man con Raylib");

    // Inicializar Pacman
    Pacman pacman;
    InitPacman(pacman);

    // Inicializar píldoras
    Pill pills[gridWidth][gridHeight];
    InitPills(pills);

    SetTargetFPS(60); // Configurar el FPS objetivo

    while (!WindowShouldClose()) {
        // Movimiento del Pacman
        HandleInput(pacman);
        UpdatePacman(pacman);

        // Comprobar colisiones con las píldoras
        CheckPillCollision(pacman, pills);

        // Dibujar todo
        BeginDrawing();
        ClearBackground(BLACK);

        // Dibujar laberinto
        DrawMaze();

        // Dibujar píldoras
        DrawPills(pills);

        // Dibujar Pacman
        DrawPacman(pacman);

        EndDrawing();
    }

    // Cerrar la ventana y liberar recursos
    CloseWindow();

    return 0;
}

