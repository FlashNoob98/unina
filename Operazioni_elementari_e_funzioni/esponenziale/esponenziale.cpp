/* Calcolo di una potenza data base ed esponente*/
#include <iostream>
using namespace std;
int main()
{
	int b,e,r=1;
	cout<< "Immetti la base: ";
	cin >>b;
	cout << "Inserisci esponente: ";
	cin >> e;
	for (int i=0; i<e; i++)
		r=r*b;
	cout <<"Il risultato è: "<<r<<endl;

	return 0;
}

