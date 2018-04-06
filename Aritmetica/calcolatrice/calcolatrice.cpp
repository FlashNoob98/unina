// calcolatrice.cpp
#include <iostream>
using namespace std;
int main (){
	float operand=1, partial;
	char operazione;
	cout<< "Benvenuto nella calcolatrice elementare"<< endl;
	cout<< "Inserisci '0' per terminare"<< endl;
	cout<< "Inserisci numero: ";
	cin>> partial;
	while (true){
		cout<< "Inserisci operazione (+,-,*,/,c): ";
		cin>> operazione;
		if (operazione == 'c'){
			partial = 0;
			cout <<"Parziale: "<<partial<<endl;
			continue;
		}
		if (operazione == '0') break;
		cout << "Inserisci numero: ";
		cin >> operand;
		if (operand == 0) break;
		switch (operazione){
			case '+': partial=partial+operand;break;
			case '-': partial=partial-operand;break;
			case '*': partial=partial*operand;break;
			case '/': partial=partial/operand;break;
		}
		cout<<"Parziale: "<<partial<<endl;
	}
	
	cout << "Programma terminato, risultato: "<<partial<<endl;
	system("PAUSE");
	return 0;
}

