#include "headers/collision.h"



void check_collision(gameObjects* obj){
    Vector2 ballCenter = {obj->ball->x, obj->ball->y};
    Rectangle rightPaddleRec = { obj->rightPaddle->x, obj->rightPaddle->y, obj->rightPaddle->sizeX, obj->rightPaddle->sizeY };
    if(CheckCollisionCircleRec(ballCenter, obj->ball->radius, rightPaddleRec)){
        if(obj->rightPaddle->y > ((float)GetScreenHeight() / 2)){
            obj->ball->state = BOTTOMRIGHT;
        } else {
            obj->ball->state = TOPLEFT;
        }
    }
    Rectangle leftPaddleRec = { obj->leftPaddle->x, obj->leftPaddle->y, obj->leftPaddle->sizeX, obj->leftPaddle->sizeY };
    if(CheckCollisionCircleRec(ballCenter, obj->ball->radius, leftPaddleRec)){
        if(obj->leftPaddle->y > ((float)GetScreenHeight() / 2)){
            obj->ball->state = TOPRIGHT;
        } else {
            obj->ball->state = BOTTOMLEFT;
        }
    }
}
