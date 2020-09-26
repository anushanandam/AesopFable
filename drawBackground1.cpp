#include "lab.h"
/*Owner: Phone*/
/*This gives the second window a background of the second scene so that the characters
are moving on top of the background rather than a blank screen. */
/*
This is what the background looks like:
\includegraphics[scale=0.25]{field2.png}
*/

void drawBackground1(cairo_t* cr)
{
    int w, h;
    cairo_surface_t* image;
    image = cairo_image_surface_create_from_png ("field2.png");
    w= cairo_image_surface_get_width (image);
    h=cairo_image_surface_get_height (image);
    cairo_set_source_surface (cr, image, 0,0);
    cairo_paint (cr);
    cairo_surface_destroy (image);
}
