#include "lab.h"
/*Owner: Anusha*/
/*This is the animation of the birds moving around at the top of the window.*/
/*
This is what the birds look like:
\includegraphics[scale=0.25]{birds/birdsn5.png}
*/


/*
const int N = 6; //vary depending on particular animated gif
std::string s[N] = {
    "birds/birdsn.png",
    "birds/birdsn1.png",
    "birds/birdsn2.png",
    "birds/birdsn3.png",
    "birds/birdsn4.png",
    "birds/birdsn5.png"
};
*/


void drawBirds(cairo_t* cr)
{
    int w, h;
    cairo_surface_t* image;
    //std::cout << "moving"<<std::endl;
    std::string imageFile = "birds/" + s[timeline%N];
    image = cairo_image_surface_create_from_png (imageFile.c_str());
    w= cairo_image_surface_get_width (image);
    h=cairo_image_surface_get_height (image);
    //cairo_scale (cr, 100.0/w, 100.0/h);
    cairo_set_source_surface (cr, image, WIDTH/2-w/2,0);
    cairo_paint (cr);
    cairo_surface_destroy (image);
}
