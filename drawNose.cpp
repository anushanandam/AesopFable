#include "lab.h"
#include <cmath>
/*Owner: Anusha*/
/*The wolf's nose is drawn to the graphics window.*/
void drawNose(cairo_t* cr,double x, double y)
{
	//std::cout<<"drawing the eyes"<<std::endl;
	cairo_set_source_rgb(cr,0, 0,0);
	/* x,y,r,start,end of arc in degrees */
	cairo_arc(cr, scaler(x+5), mirrorY(scaler(y+9.75)), ((.005*timeline)+1)*scaler(1.25), 0,180);
	cairo_fill(cr);
}
