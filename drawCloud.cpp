#include "lab.h"
/*Owner: Anusha*/
/*This is the animation of the cloud moving around at the top of the window.*/
/*
This is what the cloud looks like:
\includegraphics[scale=0.25]{cloud/cloud00.png}
*/
const int C = 8; //vary depending on particular animated gif
std::string q[C] = {

    "cloud/cloud07.png",
    "cloud/cloud15.png",
    "cloud/cloud23.png",
    "cloud/cloud31.png",
    "cloud/cloud39.png",
    "cloud/cloud47.png",
    "cloud/cloud63.png",
    "cloud/cloud71.png"

};



void drawCloud(cairo_t* cr)
{
    int w, h;
    cairo_surface_t* image;
    image = cairo_image_surface_create_from_png (q[timeline%C].c_str());
    w= cairo_image_surface_get_width (image);
    h=cairo_image_surface_get_height (image);
    cairo_set_source_surface (cr, image, WIDTH/2-w/2,0);
    cairo_paint (cr);
    cairo_surface_destroy (image);
}
