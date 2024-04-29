#ifndef MAINSCENE_H_INCLUDED
#define MAINSCENE_H_INCLUDED


#include "main.h"
#include "paddle.h"
#include "ball.h"

typedef struct _gameObjects{
    paddle* leftPaddle;
    paddle* rightPaddle;
    ball* ball;
} gameObjects;


void game_scene(state* state);

#endif