#include "lab.h"
/*Owner:Anusha*/
/*
This function creates the initial window
Then sets a callback function so that the
graphics subsystem will use that function
to redraw the window whenever the OS
decides it needs to do that.
*/
bool nopause; //this is a definition
int timeline = 0;
Fl_Cairo_Window cw1(WIDTH,HEIGHT);
Fl_Cairo_Window cw2(WIDTH,HEIGHT);
int main()
{

    Fl_Button b(0,0,WIDTH, HEIGHT);
    /*The width is the whole size of the screen
    so that the user can click anywhere they want
    in order to pause the animation. */
    b.callback(pauseCB);
    nopause = true;

	getPoints(); //function called so that characters can move separately
	getPoints2();
	getPoints3();


    getBirds(); //birds can be animated

    cw1.set_draw_cb(drawCB1);
    cw2.set_draw_cb(drawCB2);
    cw1.show(); //shows subtitles
   cw2.show(); //shows animation

    /*Call this function in 1.0 seconds*/
    Fl::add_timeout(1, moveCharacter);
    Fl::run(); //passes control to FLTK
    return 0;
}
