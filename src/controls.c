#include "headers/controls.h"
#include "headers/tools.h"


void initialize_controls(gameObjects* obj){
    

    static int idk = 0;
    if(IsKeyDown(KEY_W) && obj->leftPaddle->y > 0){
        obj->leftPaddle->y-=400.0f*GetFrameTime();
    }
    if(IsKeyDown(KEY_S) && obj->leftPaddle->y < 800){
        obj->leftPaddle->y+=400.0f*GetFrameTime();
    }
    

    if(IsKeyDown(KEY_UP) && obj->rightPaddle->y > 0){
        obj->rightPaddle->y-=400.0f*GetFrameTime();
    }
    if(IsKeyDown(KEY_DOWN) && obj->rightPaddle->y < 800){
        obj->rightPaddle->y+=800.0f*GetFrameTime();
    }
    // DEBUGGING CODE
    if(IsKeyDown(KEY_R)){
        free_mem(obj->ball);
        obj->ball = setup_ball();
    }
    // if(IsKeyPressed(KEY_H)){
    //     if (obj->ball->state <= 3) obj->ball->state++;
    //     if(obj->ball->state > 3){
    //         obj->ball->state--;
    //     } 
    // }
    // char str[100];
    // DrawText(i_to_a(obj->ball->state, str), 10, 10, 50, BLUE);
}