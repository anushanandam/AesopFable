#include "lab.h"
#include <cmath>
/*Owner: Phone*/
/*The right ear of the dog is drawn to the graphics window. */
void drawdear2(cairo_t* cr,double x, double y) 
{
	//std::cout<<"drawing the eyes"<<std::endl;
	cairo_set_source_rgb(cr,0, 0,0);
	/* x,y,r,start,end of arc in degrees */
	cairo_arc(cr, scaler(x+9.5), mirrorY(scaler(y+12.5)), ((.005*timeline)+1)*scaler(1), 0,2*M_PI);
	cairo_fill(cr);
}