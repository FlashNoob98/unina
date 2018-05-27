#include <iostream>
using namespace std;

int main(){
	int n;
	do{
		cout << "Inserisci un numero minore di 10000: ";
		cin >> n;
	}while (n>=10000);
	cout << "Migliaia: "<< n/1000 <<endl;
	cout << "Centinaia: "<< n/100-(n/1000)*10 <<endl;
	cout << "Decine: "<< n/10 - (n/100)*10 <<endl;
	cout << "Unita': "<< n - (n/10)*10 <<endl;
}
