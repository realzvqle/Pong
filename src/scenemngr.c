#include "headers/scenemngr.h"
#include "headers/mainScene.h"





void scene_manager(state* state){
    switch(state->currentScene){
        case 0:
            game_scene(state);
            break;
        case 1:
            DrawText("Pong", (GetScreenWidth()- MeasureText("Pong", 70)) / 2, GetScreenHeight() / 2 - 30, 70, WHITE);
            DrawText("Press Space To Play", (GetScreenWidth()- MeasureText("Press Space To Play", 40)) / 2, GetScreenHeight() / 2 + 80, 40, GREEN);
            if(IsKeyPressed(KEY_SPACE)) state->currentScene = 0;
            break;
        case 2:
            DrawText("Paused", (GetScreenWidth()- MeasureText("Paused", 70)) / 2, GetScreenHeight() / 2 - 30, 70, WHITE);
            DrawText("Press Space To Continue", (GetScreenWidth()- MeasureText("Press Space To Continue", 40)) / 2, GetScreenHeight() / 2 + 80, 40, GREEN);
            if(IsKeyPressed(KEY_SPACE)) state->currentScene = 0;
            break;
        default:
            int *x = 0;
            *x = 5;
            break;
    }
}