#include <iostream>
#define dim 8
using namespace std;
int main()
{
	int X[dim];
	int Y[dim/2];
	
	cout << "Inserisci valori binari:"<<endl;
	for (int i=0; i<dim; i++){	//input array X
		cout << "Valore "<<i+1<<" : ";
		cin >> X[i];
		}
		
	cout <<endl<< "Valore calcolato:"<<endl;
	for(int i=0; i<dim/2; i++){
		Y[i]=((X[2*i])&&(X[2*i+1]));
		cout << Y[i];
	}
	
	return 0;
}

