#include "lab.h"
/*Owner: Anusha*/
/*This connects the many drawings of the wolf
to make the wolf.*/
/*
This is what the wolf looks like:
\includegraphics[scale=0.25]{wolf.png}
*/
void drawWolf(cairo_t* cr,double x, double y)
{
    drawHead(cr,x,y);
    drawBody(cr,x,y);
    drawTail(cr,x,y);
    drawLeg1(cr,x,y);
    drawLeg2(cr,x,y);
    drawNose(cr,x,y);
    drawEyes(cr,x,y);
}
