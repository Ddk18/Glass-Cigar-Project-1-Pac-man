#pragma once
#ifndef PACMAN_H
#define PACMAN_H

#include "raylib.h"
#include "Config.h"

// Estructura para el Pac-Man
struct Pacman {
    Vector2 position;
    Vector2 direction;
    int speed;
};

void InitPacman(Pacman& pacman);
void HandleInput(Pacman& pacman);
void UpdatePacman(Pacman& pacman);
void DrawPacman(const Pacman& pacman);

#endif // PACMAN_H
