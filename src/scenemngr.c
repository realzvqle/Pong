#include "headers/scenemngr.h"






void scene_manager(state* state){
    switch(state->currentScene){
        case 0:
            DrawText("Scene 1", 10, 10, 30, BLUE);
            if(IsKeyPressed(KEY_W)) state->currentScene = 2;
            break;
        case 1:
            DrawText("Scene 2", 10, 10, 30, RED);
            break;
        default:
            DrawText("Invalid Scene, idk how you did this but nice", 10, 10, 20, RED);
            break;
    }
}