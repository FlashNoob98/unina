/* caduta_grave.cpp */
#include <iostream>
using namespace std;
int main()
{
	double h,t,delta,x;
	const float g = 9.80665;
	cout << "Con questo programma puoi calcolare la posizione di un grave"<< endl;
	cout << "in caduta libera in assenza di attrito, con step arbitrario" << endl;
	do{
		cout << "Entrambi i dati devono essere positivi"<< endl; //input e verifica dati
		cout << "Inserisci l'altezza: ";
		cin >> h;
		cout << "Insrisci lo step: ";
		cin >> delta;
		cout << endl;
		}
	while(!((h > 0) && (delta > 0)));
	cout << endl << "Tempo	Posizione" <<endl;
	t = delta;
	while (x > 0)
	{
		x = h - (0.5*g*t*t); //calcolo posizione
		cout.width(4);
		cout << t <<"s   "<< x <<"m"<< endl; //output
		t = t + delta; //incremento step
	}
	return 0;
}

