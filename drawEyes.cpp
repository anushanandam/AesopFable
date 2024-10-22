#include "lab.h"
#include <cmath>
/*Owner: Anusha*/
/*The eyes of the wolf are drawn to the graphics window.*/
void drawEyes(cairo_t* cr,double x, double y) 
{
	//std::cout<<"drawing the eyes"<<std::endl;
	cairo_set_source_rgb(cr,1, 0,0);
	/* x,y,r,start,end of arc in degrees */
	cairo_arc(cr, scaler(x+4), mirrorY(scaler(y+10)), ((.005*timeline)+1)*scaler(0.25), 0,2*M_PI);
	cairo_fill(cr);
}
