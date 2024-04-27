#include "headers/window.h"
#include "headers/fallback.h"
#include <heapapi.h>




static window* initialize_window(int x, int y, char* title){
    window* window = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY , sizeof(*window));
    window->x = 1600; window->y = 900; window->title = "Pong";
    return window;
}



void create_window(){
    crash_checker();
    window* window = initialize_window(1600, 900, "Pong");
    SetTraceLogLevel(LOG_FATAL);
    InitWindow(window->x, window->y, window->title);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(10, 10);
        EndDrawing();
    }
    CloseWindow();
    HeapFree(GetProcessHeap(), 0, window);
    ExitProcess(0);
}