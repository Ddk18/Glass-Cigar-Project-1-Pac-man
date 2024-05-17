#pragma once

//Displaying scale factor
#define GAME_SCALE_FACTOR	2.0f

//Function returning values
enum class AppStatus { OK = 0, ERROR, QUIT };

//Main returning values
#define EXIT_SUCCESS	0
#define EXIT_FAILURE	1

//Log messages
#define LOG(text, ...) log(__FILE__, __LINE__, text, __VA_ARGS__);
void log(const char file[], int line, const char* text, ...);

//Window size
#define WINDOW_WIDTH    400
#define WINDOW_HEIGHT   300

//Game constants
#define TILE_SIZE		8
#define LEVEL_WIDTH		25
#define LEVEL_HEIGHT	17