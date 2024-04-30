#include "headers/paddle.h"
#include "headers/tools.h"



paddle* setup_left_paddle(){
    paddle* pddle = alloc_mem(sizeof(paddle));
    pddle->x = 0; 
    pddle->y = ((float)GetScreenHeight() / 2) - 70; 
    pddle->sizeX = 20; 
    pddle->sizeY = 90; 
    pddle->color = WHITE;
    return pddle;
}


paddle* setup_right_paddle(){
    paddle* pddle = alloc_mem(sizeof(paddle));
    pddle->x = 1580; 
    pddle->y = ((float)GetScreenHeight() / 2) - 70; 
    pddle->sizeX = 20; 
    pddle->sizeY = 90; 
    pddle->color = WHITE;
    return pddle;
}


