#include "lab.h"
/*Owner: Anusha*/
/* This function gets points3 from the data3 files 
that was written in gnuplot and the points3
would follow the bezier curve and so it is called
here in order for each character to have its
own path. */
Points pts3[100] ; //100 points in point file
void getPoints3() 
{
	string s;
	ifstream ifs("points3"); //data3 went to points3
	for(int i = 0; i <4 ; i++)
	{
		getline(ifs,s);
	}
	
	double x,y; char c; int i = 0;
	while(ifs >> x >> y >> c)
	{
		pts3[i].x = x; pts3[i].y=y;
		i++;
	}
}
