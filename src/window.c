#include "headers/window.h"
#include "headers/fallback.h"
#include "headers/scenemngr.h"
#include "headers/tools.h"


state* st = NULL; 

static window* initialize_window(int x, int y, char* title){
    window* win = alloc_mem(sizeof(window));
    win->x = 1600; 
    win->y = 900; 
    win->title = "Pong";
    return win;
}



void create_window(){
    crash_checker();
    window* win = initialize_window(1600, 900, "Pong");
    SetTraceLogLevel(LOG_FATAL);
    InitWindow(win->x, win->y, win->title);
    SetExitKey(KEY_P);

    SetWindowIcon(LoadImage("assets/pongico.png"));
    st = alloc_mem(sizeof(state));
    st->currentScene = 1;
    st->rightScore = 0;
    st->leftScore = 0;
    while(!WindowShouldClose()){
        BeginDrawing();
        scene_manager(st);
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
    free_mem(win);
    free_mem(st);

    ExitProcess(0);
}