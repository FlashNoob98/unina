//dati i lati di un triangolo determinare se equilatero, isoscele o scaleno
#include <iostream>

using namespace std;
float a, b, c; // le 3 variabili sono i valori dei lati del triangolo
int main (){
	cout<< "inserisci il valore del primo lato: ";
	cin>> a;
	cout<< "inserisci il valore del secondo lato: ";
	cin>> b;
	cout<< "inserisci il valore del terzo lato: ";
	cin>> c;
	
	if (a==b) { 
	    if (a==c) cout<< "il triangolo e' equilatero :) ";
	    else cout<< "il triangolo e' isoscele ";
	}
	else cout<< "il trianglo e' scaleno ";
	cout<< endl;
	
	system ("PAUSE");
	return 0;
	
}
