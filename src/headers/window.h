#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED


#include "main.h"

typedef struct _window{
    int x;
    int y;
    char* title;
} window;

void create_window();

#endif