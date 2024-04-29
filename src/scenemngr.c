#include "headers/scenemngr.h"
#include "headers/mainScene.h"





void scene_manager(state* state){
    switch(state->currentScene){
        case 0:
            game_scene(state);
            break;
        case 1:
            DrawText("Scene 2", 10, 10, 30, RED);
            break;
        default:
            int *x = 0;
            *x = 5;
            break;
    }
}