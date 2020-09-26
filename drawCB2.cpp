#include "lab.h"
/*Owner:Anusha*/
/*This function is to call all other drawing functions for the second window.*/
/* 
We start off the code with a few if statements
that allow us to see that the backgrounds change
according to what time it is. There are different
backgrounds and that is seen by the different
function names.Then, there is a scale command
that will scale all of the vector characters that 
have been created to be in this animation. 
Once again, we manipulate if statements
according to the timeline and when the time
reaches a certain time, the scene will change into
the next scene until the animation is over. Other 
than using a translate function, there is a special
function called pts[timeline] that uses gnuplot 
data and points in order to create a Bezier curve
in order to ensure that there is separate movement
for all of the characters and so that all of the
characters don't end up moving together.
*/
/*
This is what one of the scenes look like:
\includegraphics[scale=0.25]{Scene1.png}
*/




void drawCB2(Fl_Cairo_Window* cw,cairo_t* cr)
{

    if (timeline < sceneOne) {
        drawBackground(cr); //background for scene 1
        drawBirds(cr); //GIF for scene 1
    }

    if (timeline >= sceneOne && timeline <= sceneTwo) {
        drawBackground1(cr); //background for scene 2

    }

    if (timeline > sceneTwo && timeline<= sceneThree) {
        drawBackground2(cr);  //background for scene 3
    }

    if (timeline > sceneThree && timeline<=sceneFour) {
        drawBackground3(cr); //background for scene 4
        drawCloud(cr); //GIF for scene 4
    }
    if (timeline > sceneFour) { //extends the animation to keep running after the 4th scene until user chooses to stop using the pause button 
        drawBackground3(cr);
        drawCloud(cr);
    }

    double x = 0.5;
    double y = 1;
    double sx = 0.5;
    double sy = 0.5;
    /* apply scaler the value for ty is in pixels */

    static double tx = 0.0;
    static double ty = scaler(5.0);
    const double pixel = 1.0/WIDTH;
    /* If statement that stops movement of the characters when it reaches a certain time */
    cairo_scale(cr,sx,sy); //scales characters throughout the whole animation
    /*When the timeline is less than 10 seconds, the goat rotates to reach better food in the pasture.*/
    /*
    The animation starts with scene 1 where there is a goat alone on the field.
    \includegraphics[scale=0.5]{Scene1.png}
    */
    /*The goat rotates to reach its food faster.*/
    if (timeline < sceneOne) {
         tx= tx+timeline;
        cairo_translate(cr, -1, -1);
        cairo_rotate(cr,((-2*M_PI)/180));
        cairo_translate(cr,(0.25*x)+2,-1 *y);
		drawGoat(cr,(0.25*x)+8,(-1 *y)-10);
    }
    //cairo_scale(cr,sx,sy);
    /* When the timeline is in the second scene, the wolf approaches the goat.*/
    /*
    The animation continues to Scene 2 where there is a goat who is joined by a wolf on the screen.
    \includegraphics[scale=0.5]{Scene2.png}
    */
    /*The wolf's mouth is increasing in size as his appetite increases.*/
    if (timeline >= sceneOne && timeline <= sceneTwo) {
        tx= tx+timeline;
        //cout << timeline << endl;
        drawWolf(cr,pts2[timeline].x,pts2[timeline].y); //ensures separate movement from special data and Bezier curve
        //cout << pts[timeline].x << ":" << pts[timeline].y << endl;
        drawGoat(cr,pts[timeline].x,pts[timeline].y); //ensures separate movement from special data and Bezier curve

    }
    //std::cout<<"tx is now: "<<tx<<std::endl;

    cairo_translate(cr,tx,ty);
    //  cairo_scale(cr,sx,sy);

    /*When the timeline is in the third scene, the wolf and goat dance together.*/
    /*
    The animation continues with Scene 3 where the goat and wolf move together as they dance.
    \includegraphics[scale=0.5]{Scene3.png}
    */
    if (timeline > sceneTwo && timeline<= sceneThree) {
        if (nopause) tx= tx+timeline;
        cout <<tx<<endl;
        //cairo_save(cr);
        drawWolf(cr,.25*x,-1.5*y);
        //cw2.redraw();

        //cairo_restore(cr);

       int ptsIndex = ((timeline % 10) * 10); //making the movement more crisp

        drawGoat(cr,pts3[ptsIndex].x,pts3[ptsIndex].y); //ensures separate movement from special data and Bezier curve
    }
    //cairo_translate(cr,tx,ty);
    //  cairo_scale(cr,sx,sy);
    //std::cout<<"tx is now: "<<tx<<std::endl;

    /*The fourth and final scene shows the dog attacking the wolf allowing the goat to escape.*/
    /*
    The animation ends with scene 4 where the dog chases the wolf and the goat gets to escape.
    \includegraphics[scale=0.5]{Scene4.png}
    */
    if (timeline > sceneFour) {
        if (nopause) tx=tx+timeline;
        drawWolf(cr,.25*x,((-1.5*y)-3));
        drawGoat(cr,.25*x,((-1*y)-3));
        //cairo_save(cr);
        drawDog(cr,0.1*x,0.1*y);
        //cairo_restore(cr);
    }
    cairo_translate(cr,tx,ty);
    // cairo_scale(cr,sx,sy);




}

