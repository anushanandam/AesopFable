#include "lab.h"
#include <cmath>
/*Owner: Anusha*/
/* The wolf's left leg is drawn to the graphics window.*/
void drawLeg1(cairo_t* cr,double x, double y) 
{
	//std::cout<< "drawing the head" << std::endl;
	/*rgba where alpha is amount of transparency */
	cairo_set_source_rgb (cr, 0,0,0); // maroon
	//std::cout<<"x is: " <<x<<" "<<"y is: "<<y<<std::endl;
	//std::cout<<"scaled x is: " <<scaler(x) <<" ";
	//std::cout<<"scaled y is: "<<mirrorY(scaler(y))<<std::endl;
	cairo_rectangle (cr, scaler(x+3), mirrorY(scaler(y+3)), ((.0005*timeline)+1)*scaler(1),((.0005*timeline)+1)*scaler(-3));
	/* Since positive y goes down from upper part of screen, then height
	is negated to make it go up. */
	cairo_fill (cr);
}
