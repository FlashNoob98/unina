#include <iostream>
using namespace std;

int potenza (int b, int e){
	int r=1;
	if (e==0)
		return 1;
	for (int i = 0; i<e;i++){
		r=r*b;
	}
	return r;
}

int main(){
	int a,b;
	cout << "Inserisci la base maggiore di 0: ";
	cin >> a;
	cout << "Inserisci l'esponente maggiore di 0: ";
	cin >> b;
	cout << potenza(a,b)<<endl;
	return 0;
}
