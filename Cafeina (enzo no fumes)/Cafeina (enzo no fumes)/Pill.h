#ifndef PILL_H
#define PILL_H
#include "Config.h"

#include "raylib.h"

struct Pill {
    Vector2 position; // Cambiar a Vector2 para representar la posición de la píldora
    bool active;
};

void InitPills(Pill pills[gridWidth][gridHeight]);
void DrawPills(Pill pills[gridWidth][gridHeight]);
void CheckPillCollision(Pacman& pacman, Pill pills[gridWidth][gridHeight]);

#endif // PILL_H
