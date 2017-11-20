#include <iostream>
using namespace std;
int main (){
	int eta,etacon;
	cout << "Con questo semplice programma puoi sapere se andare in pensione o no"<<endl;
	cout << "Inserisci l'età anagrafica: ";
	cin >> eta;
	cout << "Inserisci l'età contributiva: ";
	cin >> etacon;
	if (eta<=etacon)
		cout << "Ricontrolla i dati immessi";
	else if ((eta>=67)||(eta>=65&&etacon>=40))
		cout <<"Vai in pensione!";
	else
		cout << "Lavora ancora!";
	return 0;
}
