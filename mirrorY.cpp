#include "lab.h"
/*Owner: Sarah*/
/*
Mirror image of y coordinate because the
cartesian coordinate system typically has
origin at lower left corner but in the PC
screen, the origin is in the upper left corner.
*/
double mirrorY(double y)
{
    //std::cout<<"in mirrorY y is: " <<y<<std::endl;
    return HEIGHT - y;
}
