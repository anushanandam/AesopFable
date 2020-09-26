#include "config.h"
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Button.H>
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <fstream>
/*Owner: Tanmay*/
/*All information that needs to be repeated is put into file lab.h so 
	that an include statemnt can be used for the information rather than retyping
	 it several times in all of the different function files.*/
using namespace std;
/*unit is pixels (picture elements
const means "constant" and indicates to
the compiler, that we will not modify
these values during our program exectution*/
const int WIDTH = 801;
const int HEIGHT = 601;
/*timeline is a global variable but extern makes this
only a declaration rather than a definition
so that we won't get multiple definition errors and same for cw*/
extern int timeline;
extern bool nopause; // this is a declaration
extern Fl_Cairo_Window cw1;
extern Fl_Cairo_Window cw2;
void drawCB1(Fl_Cairo_Window* cw,cairo_t* cr);
void drawCB2(Fl_Cairo_Window* cw,cairo_t* cr);
void drawHead(cairo_t* cr,double x, double y);
void drawEyes(cairo_t* cr,double x, double y);
void drawBody(cairo_t* cr,double x, double y);
void drawTail(cairo_t* cr,double x, double y);
void drawLeg1(cairo_t* cr,double x, double y);
void drawLeg2(cairo_t* cr,double x, double y);
void drawWolf(cairo_t* cr,double x, double y);
void gHead(cairo_t* cr,double x, double y);
void gBody(cairo_t* cr,double x, double y);
void drawGoat(cairo_t* cr,double x, double y);
void gEye(cairo_t* cr,double x, double y);
void gLeg1(cairo_t* cr,double x, double y);
void gLeg2(cairo_t* cr,double x, double y);
void gTail(cairo_t* cr,double x, double y);
void gHorn1(cairo_t* cr,double x, double y);
void gHorn2(cairo_t* cr,double x, double y);
void drawNose(cairo_t* cr,double x, double y);
void drawDog(cairo_t* cr,double x, double y);
void drawdbody(cairo_t* cr,double x, double y);
void drawdhead(cairo_t* cr,double x, double y);
void drawdear1(cairo_t* cr,double x, double y);
void drawdear2(cairo_t* cr,double x, double y);
void drawdleg1(cairo_t* cr,double x, double y);
void drawdleg2(cairo_t* cr,double x, double y);
void soundEffects();
double mirrorY(double y);
double scaler(double u);
void moveCharacter(void*);
void drawBackground(cairo_t* cr);
void drawBirds(cairo_t* cr);
void pauseCB(Fl_Widget *, void*);
void showText(cairo_t* cr, std::string s);
string readFable();

void drawBackground1(cairo_t* cr);
void drawBackground2(cairo_t* cr);
void drawBackground3(cairo_t* cr);
void drawCloud(cairo_t* cr);




const int sceneOne = 10;
const int sceneTwo = 20;
const int sceneThree = 25;
const int sceneFour = 30;
//structure created for the points from gnuplot 
struct Points{
	double x,y;
};
void getPoints();
extern Points pts[]; //points from gnuplot
void getPoints2();
extern Points pts2[];
void getPoints3();
extern Points pts3[];


void getBirds();
extern std::string s[];
const int N = 6;

