#include <iostream>
using namespace std;

int main()
{
	int k,somma_pari,somma_dispari;
	cout << "inserisci dimensione array: ";
	cin >> k;
	int m[k]={0};
	
	for (int i=0;i<k;i++){ //input array
		cout << "Inserisci il "<<i+1<<"° valore: ";
		cin >> m[i];
		if (i%2==0)
			somma_pari += m[i];
		else somma_dispari += m[i];
	}
	
	cout <<"Array inserito:"<<endl;
	for (int i=0; i<k;i++){
		cout.width(3);
		cout << m[i];
	}
	cout <<endl<<"Array al contrario:"<<endl;
	for (int i=k-1; i>=0;i--){
		cout.width(3);
		cout << m[i];
	}
	cout <<endl<<endl;
	cout << "Elementi nelle posizioni pari: "<<endl;
	for(int i=0;i<k;i++){
		if (i%2==0){
		cout.width(3);
		cout << m[i];
		}
	}
	cout <<endl<<"Differenza tra gli elementi in posizione pari e dispari: "<<endl;
	cout.width(3);
	cout << somma_pari-somma_dispari;
	return 0;
}

