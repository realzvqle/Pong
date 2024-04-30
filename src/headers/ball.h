#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED

#include "main.h"

#define TOPRIGHT 0
#define TOPLEFT 1
#define BOTTOMRIGHT 2
#define BOTTOMLEFT 3


typedef struct _ball{
    float x;
    float y;
    int radius;
    Color color;
    short state;
    float veloX;
    float veloY;
    float gravity;
} ball;


ball* setup_ball();

#endif