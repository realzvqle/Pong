#include "headers/mainScene.h"
#include "headers/controls.h"
#include "headers/gravity.h"
#include "headers/collision.h"



void game_scene(state* state){
    static BOOL init = false;
    static gameObjects* obj;
    if(init == FALSE){
        obj = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(gameObjects));
        obj->ball = setup_ball();
        obj->leftPaddle = setup_left_paddle();
        obj->rightPaddle = setup_right_paddle();
        init = TRUE;
    }
    initialize_controls(obj);
    add_gravity(obj->ball);
    check_collision(obj);
    DrawRectangle(obj->leftPaddle->x, obj->leftPaddle->y, obj->leftPaddle->sizeX, obj->leftPaddle->sizeY, obj->leftPaddle->color);
    DrawRectangle(obj->rightPaddle->x, obj->rightPaddle->y, obj->rightPaddle->sizeX, obj->rightPaddle->sizeY, obj->rightPaddle->color);
    DrawCircle(obj->ball->x, obj->ball->y, obj->ball->radius, obj->ball->color);
    
}