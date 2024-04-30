#include "headers/ball.h"
#include "headers/tools.h"
#include <winnt.h>




ball* setup_ball(){
    ball* bll = alloc_mem(sizeof(ball));
    bll->x = (float)GetScreenWidth() / 2;
    bll->y = (float)GetScreenHeight() / 2;
    bll->radius = 10;
    bll->color = WHITE;
    bll->state = GetRandomValue(0, 3);
    bll->veloX = 500.0f;
    bll->veloY = 200.0f;
    bll->gravity = 9.8;
    return bll;
}