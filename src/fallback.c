#include "headers/fallback.h"
#include <errhandlingapi.h>




static LONG WINAPI crash_handler(EXCEPTION_POINTERS* crashInfo){
    TODO("Add Stuff To handle crashes");
    ExitProcess(-1);
    return 0;
}



void crash_checker(){
    SetUnhandledExceptionFilter(crash_handler);
}

