#include <iostream>
#include <string>
using namespace std;
int n,i;

int main(int argc, char** argv) {
	do {
	cout<<" numero massimo di partecipanti: 100"<<endl;
	cout<<" numero partecipanti: ";
	cin>>n;
	} while ((n<=0)or(n>100));

	struct tempo {
	           int h;
	           int min;
	           int sec;
	           };

	struct atleta {
	           string nome;
	           int numero;
	           tempo durata;
               };
	
	atleta iscritto[n];
	
	for (i=0;i<n;i++)
	{
	cout<<" nome"<<i<<": ";
	cin>>iscritto[i].nome;
	cout<<" pettorale: ";
	cin>>iscritto[i].numero;
	cout<<" tempo di arrivo "<<endl<<" ore: ";
	cin>>iscritto[i].durata.h;
	cout<<" minuti: ";
	cin>>iscritto[i].durata.min;
	cout<<" secondi: ";
	cin>>iscritto[i].durata.sec;
	cout<<endl;
	}
    int duratatotale[n];
	for (i=0;i<n;i++) {
     	duratatotale[i]=iscritto[i].durata.h*3600+iscritto[i].durata.min*60+iscritto[i].durata.sec;
	}
	for (i=0;i<n;i++) {
	    cout<<" il tempo impiegato dall'atleta con il numero "<<iscritto[i].numero<<" e' "<<duratatotale[i]<<" secondi";		
	}
	
	cout<<endl;
	return 0;
}
