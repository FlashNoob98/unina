#include <iostream>
#include <math.h>
#include <ostream>
#include <string>

using namespace std;
int main(){
	string a,b;
	double r,s;
	do{
		cout << "Inserisci il primo numero: ";
		getline(cin,a);
		cout <<"Inserisci il secondo: ";
		getline(cin,b);

		try{
			r = stod(a);}
		catch{}

		s = stod(b);
		cout << r<<" "<<s<<endl;}
	while((a!="q")&&(b!="q"));
		//


	return 0;
	}
