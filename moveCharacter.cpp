#include "lab.h"
/*Owner: Tanmay*/
/*This is the translate part of the animation and will cause the characters to move.*/
void moveCharacter(void*)
{
    //cw2.show();
    //std::cout<<"time is now: "<<timeline<<std::endl;
    if (nopause)
    {
        timeline= timeline+1;
    }

    soundEffects();

    /* If the timeline reaches the time assigned, then the story would change the
    subtitles to match the scene that is playing. */

    /* Add one to scene timings to ensure that everything redraws correctly */
    if (timeline == (sceneOne + 1)) {
        cw1.redraw();
    } else if (timeline == (sceneTwo + 1)) {
        cw1.redraw();
    } else if (timeline == (sceneThree + 1)) {
        cw1.redraw();
    } else if (timeline == (sceneFour + 1)) {
        cw1.redraw();
    } else {
        cw2.redraw();
    }
    /*repeat this function every 1 second */
    Fl::repeat_timeout(1, moveCharacter);
}
