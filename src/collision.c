#include "headers/collision.h"
#include "headers/tools.h"



void check_collision(gameObjects* obj){
    if(v2dDistance((Vector2){obj->rightPaddle->x, obj->rightPaddle->y}, (Vector2){obj->ball->x, obj->rightPaddle->y}) <= 70 
    && obj->rightPaddle->y > ((float)GetScreenHeight() / 2)){
        obj->ball->state = BOTTOMLEFT;
    }
    if(v2dDistance((Vector2){obj->rightPaddle->x, obj->rightPaddle->y}, (Vector2){obj->ball->x, obj->rightPaddle->y}) <= 70 
    && obj->rightPaddle->y < ((float)GetScreenHeight() / 2)){
        obj->ball->state = TOPLEFT;
    }
    if(v2dDistance((Vector2){obj->leftPaddle->x, obj->leftPaddle->y}, (Vector2){obj->ball->x, obj->leftPaddle->y}) <= 70 
    && obj->rightPaddle->y > ((float)GetScreenHeight() / 2)){
        obj->ball->state = TOPRIGHT;
    }
    if(v2dDistance((Vector2){obj->leftPaddle->x, obj->leftPaddle->y}, (Vector2){obj->ball->x, obj->leftPaddle->y}) <= 70 
    && obj->rightPaddle->y < ((float)GetScreenHeight() / 2)){
        obj->ball->state = BOTTOMLEFT;
    }
}