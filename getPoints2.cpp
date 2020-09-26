#include "lab.h"
/*Owner: Anusha*/
/* This function gets points2 from the data2 files 
that was written in gnuplot and the points2
would follow the bezier curve and so it is called
here in order for each character to have its
own path. */
Points pts2[100] ; //100 points in point file
void getPoints2() 
{
	string s;
	ifstream ifs("points2"); //data2 went to points2
	for(int i = 0; i <4 ; i++)
	{
		getline(ifs,s);
	}
	
	double x,y; char c; int i = 0;
	while(ifs >> x >> y >> c)
	{
		pts2[i].x = x; pts2[i].y=y;
		i++;
	}
}
