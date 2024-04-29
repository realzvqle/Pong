#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED


#include "main.h"

char* i_to_a(int num, char* str);
char* ull_to_a(unsigned long long num, char* str);
char* str_cat(char* destination, const char* source);
float sqrtf(float x);
float v2dDistance(Vector2 v1, Vector2 v2);



#endif