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
	  	cerr << "Devi inserire un numero: " << '\n';
			}
		} while(error==0);
		return n;
}

int main(){

	double r,s;
	do{
		cout << "Inserisci il primo numero: ";
		r = input_numero();
		cout <<"Inserisci il secondo: ";
		s = input_numero();
		cout << r<<" "<<s<<endl;
		}
	while(true);

	return 0;}
