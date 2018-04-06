// calcolatrice. cpp
#include <iostream>
using namespace std;
int main (){
	float operand=1, partial;
	char operazione;
	cout<< "Benvenuto nella calcolatrice elementare"<< endl;
	cout<< "Inserisci '0' per terminare"<< endl;
	cout<< "Inserisci numero: ";
	cin>> partial;
	while (operand!=0){
		cout<< "Inserisci operazione (+,-,*,/): ";
		cin>> operazione;
		if (operazione == '0') break;
		cout << "Inserisci numero: ";
		cin >> operand;
		switch (operazione){
			case '+': partial=partial+operand;break;
			case '-': partial=partial-operand;break;
			case '*': partial=partial*operand;break;
			case '/': partial=partial/operand;break;
		}
		cout<<"Parziale: "<<partial<<endl;
	}
	
	cout << "Programma terminato, risultato: "<<partial<<endl;
	return 0;
}

