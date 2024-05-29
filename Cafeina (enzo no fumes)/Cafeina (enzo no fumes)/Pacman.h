#ifndef PACMAN_H
#define PACMAN_H

#include "raylib.h" // Asegúrate de que esta línea está presente

struct Pacman {
    int x;
    int y;
    int size;
    int speed;
    Color color; // Color es un tipo definido en raylib.h
};

void InitPacman(Pacman& pacman);
void HandleInput(Pacman& pacman);
void UpdatePacman(Pacman& pacman);
void DrawPacman(const Pacman& pacman);

#endif // PACMAN_H
