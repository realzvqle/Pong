#include "headers/gravity.h"





void add_gravity(ball* ball){
    switch(ball->state){
        case TOPLEFT:
            ball->y += (float)GetRandomValue(100, 500) * GetFrameTime();
            ball->x -= (float)GetRandomValue(300, 500) * GetFrameTime();
            break;
        case TOPRIGHT:
            ball->y += (float)GetRandomValue(100, 500)* GetFrameTime();
            ball->x += (float)GetRandomValue(300, 500) * GetFrameTime();
            break;
        case BOTTOMLEFT:
            ball->y -= (float)GetRandomValue(100, 500) * GetFrameTime();
            ball->x -= (float)GetRandomValue(300, 500) * GetFrameTime();
            break;
        case BOTTOMRIGHT:
            ball->y -= (float)GetRandomValue(100, 500) * GetFrameTime();
            ball->x += (float)GetRandomValue(300, 500) * GetFrameTime();
            break;
    }
}