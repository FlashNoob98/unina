#include <iostream>
using namespace std;

int main()
{
	int k;
	bool pal=0;
	cout <<"Inserisci dimensione stringa: ";
	cin >>k;
	char c[k]={0},d[k]={0};
	
	//input
	for (int i=0; i<k;i++){
		cout<<"Inserisci il "<<i+1<<"° elemento: ";
		cin >> c[i];
		d[k-i-1] = c[i]; //copia inversa in stringa d
	}
	
	cout <<endl<< "Stringa al contrario:"<<endl;
	for (int i=0; i<k;i++){
		cout << d[i]<<" ";
	}
	
	cout <<endl<<endl<<"Ecco gli elementi uguali in posizione uguale: "<<endl;
	for (int i=0; i<k;i++){
		if (d[i]==c[i])
		cout << c[i]<<" ";
		else pal=1;
	}
	
	cout <<endl<<endl;
	if (pal==0)
	cout <<"La stringa e' palindroma!";
	else cout <<"La stringa non e' palindroma!";
	
	return 0;
}

