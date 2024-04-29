#include "headers/window.h"
#include "headers/fallback.h"
#include "headers/scenemngr.h"
#include <heapapi.h>
#include <winnt.h>


state* st = NULL; 

static window* initialize_window(int x, int y, char* title){
    window* win = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY , sizeof(window));
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
    st = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(state));
    st->currentScene = 0;
    while(!WindowShouldClose()){
        BeginDrawing();
        scene_manager(st);
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
    HeapFree(GetProcessHeap(), 0, win);
    HeapFree(GetProcessHeap(), 0, st);

    ExitProcess(0);
}