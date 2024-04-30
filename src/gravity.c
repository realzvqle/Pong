#include "headers/gravity.h"
#include "headers/tools.h"
#include <winnt.h>



void add_gravity(ball* ball){
    // debug
    //char str[100];
    //DrawText(i_to_a(ball->state, str), 10, 10, 40, RED);
    if(ball->y <= 0 || ball->y >= 900){
         ball->x = (float)GetScreenWidth() / 2;
         ball->y = (float)GetScreenHeight() / 2;
         ball->radius = 10;
         ball->color = WHITE;
         ball->state = GetRandomValue(0, 3);
         ball->veloX = 500.0f;
         ball->veloY = 200.0f;
         ball->gravity = 9.8;
        return;
    }
    switch(ball->state){
        case TOPLEFT:
            ball->y += ball->gravity * GetFrameTime();
            ball->x -= ball->veloX * GetFrameTime();
            ball->gravity+=0.01;
            break;
        case BOTTOMRIGHT:
            ball->y += ball->gravity * GetFrameTime();
            ball->x -= ball->veloX * GetFrameTime();
            break;
        case TOPRIGHT:
            ball->y -= ball->gravity * GetFrameTime();
            ball->x += ball->veloX * GetFrameTime();
            ball->gravity+=0.02;
            break;
        case BOTTOMLEFT:
            ball->y -= ball->gravity * GetFrameTime();
            ball->x += ball->veloX * GetFrameTime();
            break;
        default:
            ball->y += ball->gravity * GetFrameTime();
            break;
    }
    
}
