#include "Pill.h"

void InitPills(Pill pills[gridWidth][gridHeight]) {
    for (int x = 0; x < gridWidth; x++) {
        for (int y = 0; y < gridHeight; y++) {
            pills[x][y].position = { (float)(x * gridSize), (float)(y * gridSize) };
            pills[x][y].active = true;
        }
    }
}

void DrawPills(Pill pills[gridWidth][gridHeight]) {
    for (int x = 0; x < gridWidth; x++) {
        for (int y = 0; y < gridHeight; y++) {
            if (pills[x][y].active) {
                DrawCircleV(pills[x][y].position, gridSize / 4, YELLOW);
            }
        }
    }
}

void CheckPillCollision(Pacman& pacman, Pill pills[gridWidth][gridHeight]) {
    int gridX = static_cast<int>(pacman.position.x / gridSize);
    int gridY = static_cast<int>(pacman.position.y / gridSize);
    if (gridX >= 0 && gridX < gridWidth && gridY >= 0 && gridY < gridHeight && pills[gridX][gridY].active) {
        pills[gridX][gridY].active = false;
    }
}
