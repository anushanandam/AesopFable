#include "lab.h"
/*Owner: Tanmay */
/*This allows the animation to have 
sound to enhance what the characters are 
doing. The sounds play along with the
timeline and approximately when the
scenes change to represent what is going on.
The sound bits were uploaded to our 
directory in order for it to work.*/
void soundEffects() {

    if (timeline == 1) {
        system("aplay chirping.wav&");
    }

    if (timeline == (sceneTwo-3)) {
        system("aplay grass.wav&");
    }

    if (timeline == (sceneTwo)) {
        system("aplay grass.wav&");
    }

    if (timeline == sceneThree) {
        system("aplay pipe.wav&");
    }

    if (timeline == (sceneFour-2)) {
        system("aplay growl.wav&");
    }
    if (timeline == (sceneFour)) {
        system("aplay growl.wav&");
    }


    







}
