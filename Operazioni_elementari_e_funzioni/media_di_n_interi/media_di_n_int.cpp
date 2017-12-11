#include <iostream>
using namespace std;
int main()
{
	int n,x;
	float somma;
	cout << "Questo programma svolge la media aritmetica di n interi,"<<endl;
	cout << "inizia inserendo il numero di interi: ";
	cin >> n;
	for(int i=0; i<n ; i++)
	{
		cout << "Inserisci il "<< (i+1) <<"° numero"<<endl;
		cin >> x;
		somma += x;
	}
	cout << "La media è: "<< (float)(somma/n) << endl;
	return 0;
}

