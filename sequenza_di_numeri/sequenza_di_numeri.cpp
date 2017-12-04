#include <iostream>
using namespace std;

int main()
{
	int n,a,i=0,max=0;
	float somma=0;
	cout << "Inserisci degli interi oppure"<<endl<<"un numero negativo per terminare l'esecuzione"<<endl;
	
	do{
		cout <<"Inserisci: ";
		cin >> a;
		if (a>=0){
			n=a;
			i++;
		if (n>max)
			max = n;
		somma = somma+n;
		}
	}while(a>=0);
	
	cout <<endl<< "Numeri inseriti: "<<i<<endl;
	cout <<"Il massimo è: "<<max<<endl;
	cout << "La loro somma è: "<<somma<<endl;
	cout << "La media aritmetica è: " <<somma/i<<endl;
		
	return 0;
}
