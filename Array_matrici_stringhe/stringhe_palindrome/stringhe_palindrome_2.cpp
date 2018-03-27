#include <iostream>
#include <string>
using namespace std;

int main(){
	bool pal =1,none=1;
	string var,inversa;
	cout << "Inserisci una stringa: ";
	getline (cin, var); //input stringa
	int lunghezza = (int)var.length();
	int count[lunghezza]={0};
	
	cout<<endl;
	for (int i=0; i<lunghezza;i++){ //print di verifica input
		if (var[i]==' ') {
			cout.width(2);
			cout <<"_";	//stampo spazi
		}
		else{
			cout.width(2);
			cout << var[i];
		}
		inversa[lunghezza-i-1] = var[i]; //copio stringa inversa
	}
	
	cout <<endl; //output inversa
	for (int i=0; i<lunghezza;i++){
		if (inversa[i]==' ') {
			cout.width(2);
			cout <<"_";	//stampo spazi
		}
		else{
			cout.width(2);
			cout << inversa[i];
		}
	}
		
	cout <<endl<<endl<<"Cerco gli elementi uguali in posizione uguale: "<<endl; //confronto stringa con inversa
	for (int i=0; i<lunghezza;i++){
		if (var[i]==inversa[i]){
			if (var[i]==' ') {
				cout.width(3);
				cout <<"_";	//stampo spazi
				}
			else {
				cout.width(3);
				cout << var[i]; //stampo il resto
				}
			none = 0;
			count[i]=i+1;
			}
		else pal=0;
	}
	if(none) cout <<"Nessuno!";
	cout <<endl;
	for (int i=0; i<lunghezza ;i++){
		if(count[i]!=0){
			cout.width(3);
			cout <<count[i];
			}
	}

	cout <<endl<<endl;
	if (pal)
		cout <<"La stringa e' palindroma!";
	else cout <<"La stringa non e' palindroma!";
	
	return 0;
}
