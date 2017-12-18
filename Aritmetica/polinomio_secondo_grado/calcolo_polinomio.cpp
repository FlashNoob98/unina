#include <iostream>
#include <cmath>
using namespace std;

double poly2eval(double c[3], double v){
	return c[0]*pow(v,2)+c[1]*v+c[2];
}

int main()
{
	double c[3]={1},v;
	cout << "Inserisci i coefficienti della seguente equazione: "<<endl;
	cout <<"ax^2+bx+c con a>0"<<endl;
	do{
		cout <<"a: ";
		cin >> c[0];
	}while(c[0]<=0);
	cout <<"b: ";
	cin >> c[1];
	cout <<"c: ";
	cin >> c[2];
	cout <<"Il polinomio inserito è: "<<c[0]<<"X^2+"<<c[1]<<"X+"<<c[2]<<endl;
	cout << "Ora inserisci il punto in cui calcolare il polinomio: ";
	cin >> v;
	cout << "Il polinomio nel punto vale: "<<poly2eval(c,v)<<endl;
	return 0;
}

