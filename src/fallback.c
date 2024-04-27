#include "headers/fallback.h"
#include <errhandlingapi.h>
#include "headers/tools.h"




static LONG WINAPI crash_handler(EXCEPTION_POINTERS* crashInfo){
    char buffer[1024] = "An Error Has Occured\n\n\n\n";
    
    char address[40]; ull_to_a((unsigned long long)crashInfo->ExceptionRecord->ExceptionAddress, address);
    char code[40];    ull_to_a((unsigned long long)crashInfo->ExceptionRecord->ExceptionCode, code);
    str_cat(buffer, "0x");
    str_cat(buffer, address);
    str_cat(buffer, "\n\n\n");
    str_cat(buffer, "0x");
    str_cat(buffer, code);
    str_cat(buffer, "\n\n\n");
    InitWindow(500, 500, "Catastrophic Error");
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText(buffer, 10, 10, 40, RED);
        EndDrawing();
    }
    CloseWindow();
    ExitProcess(-1);
    return 0;
}





void crash_checker(){
    SetUnhandledExceptionFilter(crash_handler);
}

