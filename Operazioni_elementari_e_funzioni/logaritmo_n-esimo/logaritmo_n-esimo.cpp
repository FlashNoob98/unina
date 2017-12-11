/*Calcolo logaritmo n-esimo di x*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n,x,r;
	cout << "Inserisci base: ";
	cin >> n;
	cout << "Inserisci argomento: ";
	cin >> x;
	r = log(x)/log(n); //formula cambiamento di base
	cout << "Risultato: "<<r<<endl;
	return 0;
}
