#include "Pacman.h"

void InitPacman(Pacman& pacman) {
    pacman.position = { screenWidth / 2.0f, screenHeight / 2.0f };
    pacman.direction = { 0.0f, 0.0f };
    pacman.speed = 200;
}

void HandleInput(Pacman& pacman) {
    if (IsKeyDown(KEY_RIGHT)) pacman.direction = { 1.0f, 0.0f };
    else if (IsKeyDown(KEY_LEFT)) pacman.direction = { -1.0f, 0.0f };
    else if (IsKeyDown(KEY_UP)) pacman.direction = { 0.0f, -1.0f };
    else if (IsKeyDown(KEY_DOWN)) pacman.direction = { 0.0f, 1.0f };
    else pacman.direction = { 0.0f, 0.0f };
}

void UpdatePacman(Pacman& pacman) {
    Vector2 newPosition = {
        pacman.position.x + pacman.direction.x * pacman.speed * GetFrameTime(),
        pacman.position.y + pacman.direction.y * pacman.speed * GetFrameTime()
    };

    int gridX = static_cast<int>(newPosition.x / gridSize);
    int gridY = static_cast<int>(newPosition.y / gridSize);

    // Aquí deberías agregar la comprobación del laberinto
    pacman.position = newPosition;
}

void DrawPacman(const Pacman& pacman) {
    DrawCircleV(pacman.position, gridSize / 2, YELLOW);
}
