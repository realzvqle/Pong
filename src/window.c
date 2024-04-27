#include "headers/window.h"
#include "headers/fallback.h"
#include <heapapi.h>
#include <winnt.h>




static window* initialize_window(int x, int y, char* title){
    window* win = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY , sizeof(window));
    win->x = 1600; win->y = 900; win->title = "Pong";
    return win;
}



void create_window(){
    crash_checker();
    window* win = initialize_window(1600, 900, "Pong");
    SetTraceLogLevel(LOG_FATAL);
    InitWindow(win->x, win->y, win->title);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(10, 10);
        EndDrawing();
    }
    CloseWindow();
    HeapFree(GetProcessHeap(), 0, win);
    ExitProcess(0);
}