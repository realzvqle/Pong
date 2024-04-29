#ifndef PADDLE_H_INCLUDED
#define PADDLE_H_INCLUDED


#include "main.h"

typedef struct _paddle{
    float x;
    float y;
    int sizeX;
    int sizeY;
    Color color;
} paddle;

paddle* setup_left_paddle();
paddle* setup_right_paddle();



#endif