#pragma once
#ifndef PILL_H
#define PILL_H

#include "raylib.h"
#include "Pacman.h"
#include "Config.h"

// Estructura para los puntos (píldoras)
struct Pill {
    Vector2 position;
    bool active;
};

void InitPills(Pill pills[gridWidth][gridHeight]);
void DrawPills(Pill pills[gridWidth][gridHeight]);
void CheckPillCollision(Pacman& pacman, Pill pills[gridWidth][gridHeight]);

#endif // PILL_H
