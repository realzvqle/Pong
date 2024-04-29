#include "headers/ball.h"
#include <heapapi.h>
#include <winnt.h>




ball* setup_ball(){
    ball* bll = (ball*)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(ball));
    bll->x = (float)GetScreenWidth() / 2;
    bll->y = (float)GetScreenHeight() / 2;
    bll->radius = 10;
    bll->color = WHITE;
    bll->state = TOPRIGHT;
    return bll;
}