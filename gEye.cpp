#include "lab.h"
#include <cmath>
/*Owner: Sarah*/
/*The goat's eye is drawn to the graphics window.*/
void gEye(cairo_t* cr,double x, double y) 
{
	//std::cout<<"drawing the eyes"<<std::endl;
	cairo_set_source_rgb(cr,1, 1,0);
	/* x,y,r,start,end of arc in degrees */
	cairo_arc(cr, scaler(x+8.7), mirrorY(scaler(y+9.3)), ((.005*timeline)+1)*scaler(0.25), 0,2*M_PI);
	cairo_fill(cr);
}

