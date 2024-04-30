#include "headers/gravity.h"
#include "headers/tools.h"



void add_gravity(ball* ball){
    char str[100];
    DrawText(i_to_a(ball->state, str), 10, 10, 40, RED);
    if(ball->y <= 0 || ball->y >= 800){
        HeapFree(GetProcessHeap(), 0, ball);
        ball = setup_ball();
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
