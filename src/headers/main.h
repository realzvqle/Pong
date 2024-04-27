#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define _AMD64_
#define TODO(x)

#include "raylib/raylib.h"


#include <processthreadsapi.h>
#include <heapapi.h>


typedef struct _window{
    int x;
    int y;
    char* title;
} window;


typedef struct _state{
    short currentScene;
} state;


#endif