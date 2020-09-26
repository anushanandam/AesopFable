#include "lab.h"
#include <sstream>

/*
This calls all of the functions in order for the first 
window to successfully have the subtitles. The first thing
to do is set the background to a clear color like gray
and then make the font something legible and a size 
big enough for anyone to read. Then, a file named 
readFable was created so it is called upon in this function
in order to read the fable that comes from the text file
that the fable is written in. Each scene is split into a separate
array so the time changes per scene would change the correct
words on the subtitles window. The times for each scene are 
defined in lab.h so that they only have to changed in one place.
*/

/*
This is what the subtitles looks like:
\includegraphics[scale=0.25]{sub.png}
*/

/*Owner: Tanmay*/

void drawCB1(Fl_Cairo_Window* cw,cairo_t* cr)
{

    /* Set screen background */
    cairo_set_source_rgb(cr, 0.1, 0.1, 0.1);

    /* Set font type and size */
    cairo_select_font_face(cr, "Purisa",
                           CAIRO_FONT_SLANT_NORMAL,
                           CAIRO_FONT_WEIGHT_BOLD);

    cairo_set_font_size(cr, 48);


    std::string fable = readFable();

    std::istringstream stream(fable);
    std::string line;
    int arrSize = 0;
    while (std::getline(stream, line)) {
        arrSize++;
    }

    std::istringstream stream2(fable);
    string fableArr[arrSize];
    for (int i = 0; std::getline(stream2, line); i++) {
        fableArr[i] = line;
    }

    //std::cout << fable;

    std::string sceneOneText = fableArr[0];
    std::string sceneTwoText = fableArr[1];
    std::string sceneThreeText = fableArr[2];
    std::string sceneFourText = fableArr[3];

    if (timeline <= sceneOne) {
        showText(cr, sceneOneText);
    }
    else if (timeline > sceneOne && timeline <= sceneTwo) {
        showText(cr, sceneTwoText);
    }

    else if (timeline > sceneTwo && timeline <= sceneThree) {
        showText(cr, sceneThreeText);
    }
    else if (timeline > sceneFour) {
        showText(cr, sceneFourText);
    }



}


