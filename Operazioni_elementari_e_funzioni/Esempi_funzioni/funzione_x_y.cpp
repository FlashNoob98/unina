#include <iostream>
using namespace std;

float f2(float x, float y){
	return x*x + 1/(y*y) +1;
}

int main (){
	float stepx = 1, stepy=0.5;
	int startx=0, endx=10, starty=0, endy=1;

	for (float x=startx; x<=endx;x+=stepx){
		for (float y=starty+stepy; y<=endy;y+=stepy){
			cout << "f("<<x<<";"<<y<<") = "<<f2(x,y)<<endl;

		}
	}

	return 0;
}
