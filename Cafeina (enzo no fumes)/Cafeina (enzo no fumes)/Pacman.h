#ifndef PACMAN_H
#define PACMAN_H

#include "raylib.h" // Aseg�rate de que esta l�nea est� presente

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
