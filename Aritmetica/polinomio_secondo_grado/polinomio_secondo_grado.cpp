#include <iostream>
#include <cmath>
using namespace std;
float radiceM(float a,float b,float c){
	return ((-b+sqrt(pow(b,2)-(4*a*c)))/(2*a));
}
float radicem(float a,float b,float c){
	return ((-b-sqrt(pow(b,2)-(4*a*c)))/(2*a));
}


int main()
{
	float a,b,c;
	cout << "Inserisci i coefficienti della seguente equazione: "<<endl;
	cout <<"ax^2+bx+c con a>0"<<endl;
	do{
		cout <<"a: ";
		cin >> a;
	}while(a<=0);
	cout <<"b: ";
	cin >> b;
	cout <<"c: ";
	cin >> c;
	cout <<"le radice maggiore è :"<<radiceM(a,b,c)<<endl;
	cout <<"le radice minore è :"<<radicem(a,b,c)<<endl;
	return 0;
}

