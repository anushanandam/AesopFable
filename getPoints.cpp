#include "lab.h"
/*Owner: Anusha*/
/* This function gets points from the data files 
that was written in gnuplot and the points
would follow the bezier curve and so it is called
here in order for each character to have its
own path. */


Points pts[100] ; //100 points in point file
void getPoints() 
{
	string s;
	ifstream ifs("points"); //data went into points
	for(int i = 0; i <4 ; i++) 
	{
		getline(ifs,s);
	}
	
	double x,y; char c; int i = 0; 
	while(ifs >> x >> y >> c)
	{
		pts[i].x = x; pts[i].y=y;
		i++;
	}
}
