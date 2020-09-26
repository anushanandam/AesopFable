/*Owner: Phone*/
/*The body of the dog is drawn to the graphics window. */
#include "lab.h"
#include <iostream>
void drawdbody(cairo_t* cr,double x, double y)
{
    cairo_set_source_rgb (cr, 1, 1, 0);
    cairo_rectangle(cr, -5, 10, 500, 250);
    cairo_fill (cr);
}
