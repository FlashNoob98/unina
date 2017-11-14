#include <iostream>
using namespace std;
int main()
{
	float prezzo,imposta;
	cout<<"Inserisci il prezzo dell'oggetto: ";
	cin >> prezzo;
	cout<<"Ora inserisci l'aliquota IVA: ";
	cin >> imposta;
	cout <<endl<<"L'imponibile da pagare è: "<< prezzo*imposta/100 <<" €"<<endl<<endl;
	cout <<"Il costo totale è: "<<prezzo+(prezzo*imposta/100)<<" €";
	
	return 0;
}

