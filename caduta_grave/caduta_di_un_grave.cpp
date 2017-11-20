/* Caduta di un grave */
#include <iostream>
using namespace std;
int main()
{
	float h,g=9.81,t,delta,x;
	cout << "Inserisci l'altezza dalla quale cade il grave: ";
	cin >> h;
	cout << "Insrisci il passo del calcolo: ";
	cin >>delta;
	while (x>0)
	{
		x=h-0.5*g*t*t;
		cout.width(4);
		cout <<"T:"<<t<<" s  "<<x<<" m"<<endl;
		t = t+delta;
	}
	return 0;
}

