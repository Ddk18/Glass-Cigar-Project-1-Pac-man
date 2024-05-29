#include "Pacman.h"
#include "raylib.h"

void InitPacman(Pacman& pacman) {
    pacman.x = 100;
    pacman.y = 100;
    pacman.size = 20;
    pacman.speed = 2;
    pacman.color = YELLOW;
}

void HandleInput(Pacman& pacman) {
    if (IsKeyDown(KEY_RIGHT)) pacman.x += pacman.speed;
    if (IsKeyDown(KEY_LEFT)) pacman.x -= pacman.speed;
    if (IsKeyDown(KEY_UP)) pacman.y -= pacman.speed;
    if (IsKeyDown(KEY_DOWN)) pacman.y += pacman.speed;
}

void UpdatePacman(Pacman& pacman) {
    // Actualizaciones adicionales si son necesarias
}

void DrawPacman(const Pacman& pacman) {
    DrawCircle(pacman.x, pacman.y, pacman.size, pacman.color);
}
