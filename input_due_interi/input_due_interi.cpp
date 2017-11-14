#include <iostream>
using namespace std;
int main(){
	int a,b,somma,prodotto;
	
	cout << "In questo programma inserirai due numeri,"<< endl;
	cout << "poi visualizzerai la loro somma e prodotto" << endl;
	cout << "immetti il tuo primo numero" << endl;
	cin >> a;
	cout << "immetti il tuo secondo numero" << endl;
	cin >> b;
	somma = a+b;
	prodotto = a*b;
	cout << endl << a << " + "<< b << " fa: " << somma << endl << endl;
	cout << "mentre "<< a << " x " << b << " fa: " << prodotto << endl<<endl;
	cout << "La differenza prodotto - somma è: "<< prodotto-somma;
}
