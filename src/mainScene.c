#include "headers/mainScene.h"
#include "headers/controls.h"
#include "headers/gravity.h"
#include "headers/collision.h"
#include "headers/tools.h"

void game_scene(state* state){
    char str[100];
    static BOOL init = false;
    static gameObjects* obj;
    if(init == FALSE){
        if(obj == NULL){
            obj = alloc_mem(sizeof(gameObjects));
        }
        obj->ball = setup_ball();
        obj->leftPaddle = setup_left_paddle();
        obj->rightPaddle = setup_right_paddle();
        
        init = TRUE;
    }
    if(IsKeyDown(KEY_ESCAPE)) state->currentScene = 2;
    initialize_controls(obj);
    add_gravity(obj->ball);
    check_collision(obj);
    DrawRectangle(obj->leftPaddle->x, obj->leftPaddle->y, obj->leftPaddle->sizeX, obj->leftPaddle->sizeY, obj->leftPaddle->color);
    DrawRectangle(obj->rightPaddle->x, obj->rightPaddle->y, obj->rightPaddle->sizeX, obj->rightPaddle->sizeY, obj->rightPaddle->color);
    DrawCircle(obj->ball->x, obj->ball->y, obj->ball->radius, obj->ball->color);
    if(obj->ball->x <= 0){
        state->rightScore++;
        init = FALSE;
    } 
    if(obj->ball->x >= 1600){
        state->leftScore++;
        free_mem(obj->ball);
        free_mem(obj->leftPaddle);
        free_mem(obj->rightPaddle);
        init = FALSE;
    } 
    DrawText(i_to_a(state->leftScore, str), GetScreenWidth() / 2 - 50, GetScreenHeight() / 2, 50, WHITE);
    DrawText(i_to_a(state->rightScore, str), GetScreenWidth() / 2 + 50, GetScreenHeight() / 2, 50, WHITE);
}