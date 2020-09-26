#include "lab.h"
#include <fstream>
/*Owner: Tanmay*/
/*This allows us to see the GIF of the birds run
in the first scene through an if statement to see
if there is outupt in the array to run the animation. */

//int N = 6; //vary depending on particular animated gif
std::string s[N];

void getBirds() {

    system("ls birds > birdsOut");
    ifstream file("birdsOut");

    std::string empty;
    file >> empty;
/*only enter the if statement if reading the argument
and then carry on to the for loop leading to an array*/
    if (file.is_open()) {

        for (int i = 0; i < N; i++) {
            file >> s[i];
        }
    }


    /*
    std::string s[N] = {
        "birds/birdsn.png",
        "birds/birdsn1.png",
        "birds/birdsn2.png",
        "birds/birdsn3.png",
        "birds/birdsn4.png",
        "birds/birdsn5.png"
    };
    */



}
