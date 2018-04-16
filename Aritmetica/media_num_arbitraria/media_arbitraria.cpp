/* Media algebrica di n numeri fino all'inserimento di 100 */
#include <iostream>
using namespace std;
int main(){
	int somma=0,x,p=0;
	cout << "Media di n numeri fin quando non si inserisce 100"<<endl;
	do{
		cout << "Inserisci numero: ";
		cin >> x;
		if (x!=100){
			somma += x;
			p++;
		}
	}while(x!=100);
	cout << "La media e': "<< ((float)somma)/p<<endl;
	}
