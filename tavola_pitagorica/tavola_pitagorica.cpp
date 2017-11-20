/* Questo programma stampa la tavola pitagorica dato un indice */
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Inserisci la grandezza della tavola pitagorica: ";
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		for(int y=1; y<=n; y++)
		{
			cout.width(4);
			cout << y*i;
		}
		cout << endl;
	}
	
	return 0;
}

