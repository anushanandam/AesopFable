#include "lab.h"
/*Owner: Phone*/
/*
scale the unit size used for x y coordinates
example: if u is 2, the function returns
HEIGHT/10*2 = 40 (pixels)

for HEIGHT = 200
*/

double scaler(double u)
{
    //std::cout << "in scaler u is: " <<u <<std::endl;
    return HEIGHT / 10.0 * u;
}
