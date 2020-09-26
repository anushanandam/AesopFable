#include "lab.h"
/*Owner: Phone*/
/*This gives the second window a background of the last scene so that the characters
and clouds are moving on top of the background rather than a blank screen. */
/*
This is what the background looks like:
\includegraphics[scale=0.25]{field4.png}
*/

void drawBackground3(cairo_t* cr)
{
    int w, h;
    cairo_surface_t* image;
    //std::cout << "moving"<<std::endl;
    image = cairo_image_surface_create_from_png ("field4.png");
    w= cairo_image_surface_get_width (image);
    h=cairo_image_surface_get_height (image);
    //cairo_scale (cr, 800.0/w, 600.0/h);
    cairo_set_source_surface (cr, image, 0,0);
    cairo_paint (cr);
    cairo_surface_destroy (image);
}