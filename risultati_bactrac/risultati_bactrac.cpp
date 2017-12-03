#include <iostream>
#include <math.h>
#include <ostream>
#include <string>

using namespace std;

double input_numero(){
		string a;
		double n;
		bool error=0;
		do{
		try{
			getline(cin,a);
			n = stod(a);
			error=1;
			}
		catch(const invalid_argument) {
			if((a[0]=='q')||(a[0]=='Q')){
				exit(0);
				}
	  	cerr << "Devi inserire un numero: ";
			}
		} while(error==0);
		return n;
}

int main(){
	cout << "Inserisci i valori o q per uscire"<<endl;
	double r,s,risultato;
	while(true){
		cout << "Inserisci il primo numero: ";
		r = input_numero();
		cout <<"Inserisci il secondo: ";
		s = input_numero();
		if(abs(log10(r/s))<1){
			cout << "Valore non accettabile, nullo."<<endl<<endl;
		}
		else{
			risultato=(pow((abs(r*s)),0.5))*100;	//media geometrica ecc
			cout << "Il risultato e': "<<risultato<<endl<<endl;
		}
	}
	return 0;
}
