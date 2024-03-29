#ifndef UTIL_H
#define UTIL_H
#include <GL/glut.h>

//global variable
extern float* PixelBuffer;
extern int WinW, WinH;
extern GLvoid *font_style; //font style

int rd(const float a); //function for rounding
void MakePix(int x, int y, float r, float g, float b); //makepixel function
void drawstr(float x, float y, const char* format, size_t length); 

#endif
