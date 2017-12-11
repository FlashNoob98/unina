#include <iostream>
#include <cmath>
#include <fstream>
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

int print_res(double a,double b, string res){
	//debug cout <<a<<" + "<<b<<" = "<<res<<endl;
	ofstream file ("Risultati.txt",ofstream::app);
  if (file.is_open())
  {
	  file.width(8);
	  file << a;
	  //file.width(8);
      file <<" and ";
      file.width(8);
      file <<b<<" = "<<res<<endl;
      file.close();
  }
  else cout <<endl<< "Impossibile aprire il file";
  
	return 0;
	}

int main(){
	cout << "Inserisci i valori o q per uscire"<<endl;
	double r,s,risultato=0;
	while(true){
		cout << "Inserisci il primo numero: ";
		r = input_numero();
		cout <<"Inserisci il secondo: ";
		s = input_numero();
		if(abs(log10(r/s))<1){
			cout << "Valore non accettabile, nullo."<<endl<<endl;
			print_res(r,s,"nullo"); //stampa su file errore
		}
		else{
			risultato=(pow((abs(r*s)),0.5))*100;	//media geometrica ecc
			cout << "Il risultato e': "<<risultato<<endl<<endl;
			if (risultato==0) print_res(r,s,"0");
			else print_res(r,s,std::to_string(risultato)); //stampa su file risultato
		}		
		
	}
	return 0;
}
