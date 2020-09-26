#include "lab.h"
/*Owner: Tanmay*/
/*This is the pause button the screen that the
animation is playing on. The movie is originally
playing and the viewer can pause it wherever
they would like to.*/
/*The pause button takes up the whole screen
so the viewer can pause more smoothly. */

void pauseCB(Fl_Widget *, void*)
{
    std::cout<<"ouch!"<<std::endl; //output when button is being pressed
    if (nopause) nopause = false;
    else nopause = true;
    //nopause = not nopause;
}
