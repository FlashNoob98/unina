/* Media algebrica dei numeri pari */
#include <iostream>
using namespace std;
int main(){
	int n,x,p=0,somma=0;
	cout << "Questo programma esegue la media dei numeri pari inseriti"<<endl;
	cout << "Di quanti numeri vuoi fare la media?: ";
	cin >> n;
	for (int i=0; i<n; i++){
		cout << "Inserisci il "<<(i+1)<<"° numero: ";
		cin >> x;
		if ((x%2)==0){
			somma += x;
			p++;
		}
	}
	cout << "La media dei numeri pari inseriti e': "<< ((float)somma)/p<<endl;
	return 0;
	}
