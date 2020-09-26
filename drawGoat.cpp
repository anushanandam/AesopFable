/*Owner: Sarah*/
/*All of the functions to draw the goat are combined in this function to draw the total goat*/
/*
This is what the goat looks like:
\includegraphics[scale=0.25]{goat.png}
*/
#include "lab.h"
void drawGoat(cairo_t* cr,double x, double y)
{
	gBody(cr,x,y);
	gHead(cr,x,y);
	gEye(cr,x,y);
	gLeg1(cr,x,y);
	gLeg2(cr,x,y);
	gTail(cr,x,y);
	gHorn1(cr,x,y);
	gHorn2(cr,x,y);
}

