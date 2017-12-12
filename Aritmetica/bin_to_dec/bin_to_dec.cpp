#include <iostream>
#include <cmath>
#define n 8
using namespace std;

int main()
{
	int bin[n]={0};
	double dec=0;
	cout << "Inserisci la sequenza binaria"<<endl;
	for (int i=0; i<n;i++){
		cout << i+1<<"° elemento: ";
		cin >> bin[n-i-1];
		dec = dec + ((pow(2,n-i-1)*bin[n-i-1])); //calcolo decimale
	}
	
	/*cout <<"Stringa inserita: "<<endl;	//output facoltativo, richiede un ciclo in più
	for (int i=0; i<n;i++){
		//dec = dec + ((pow(2,i)*bin[i]));
		cout << bin[n-i-1];	
	}*/
	
	cout <<endl<<"Numero decimale: "<<endl<<dec;
	
	return 0;
}

