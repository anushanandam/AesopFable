#include "lab.h"
#include <iostream>
/*Owner: Phone*/
/*All of the functions to draw the dog are combined in this function to draw the total dog.*/
/*
This is what the dog looks like:
\includegraphics[scale=0.25]{dog.png}
*/
void drawDog(cairo_t* cr,double x, double y)
{
        drawdbody(cr,x,y);
        drawdhead(cr,x,y);
        drawdear1(cr,x,y);
        drawdear2(cr,x,y);
        drawdleg1(cr,x,y);
        drawdleg2(cr,x,y);
}
  
