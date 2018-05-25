//confronto tra vettori
#include <iostream>
#define DIM 10	//dim max array
#define n 3		//numero di array da confrontare +1 risultato
#define lar 3	//larghezza output
using namespace std;

int array[DIM][n]; 	//n array
int d[n]; 			//array che mantiene le dimensioni dei singoli array

void inserisci_array();
void stampa_array();
void swap (int input[][n]);
void ordina_tutto();
void elimina_duplicati();
int aggiungi_tutto();
void stampa_res(int m);

int main(){
	int m;
	inserisci_array();
	stampa_array();
	ordina_tutto();
	cout<<"Array ordinati: "<<endl;
	stampa_array();
	cout<<endl<<"Eliminati i duplicati: "<<endl;
	elimina_duplicati();
	stampa_array();
	//stampa_array();
	m= aggiungi_tutto();
	stampa_res(m);
	}

void inserisci_array(){
	for (int k=0; k<n-1;k++){
		cout<<"Inserisci array "<<k+1<<" : "<<endl;
		cout <<"Inserisci lunghezza array: ";
		cin>> d[k];
		for (int i=0; i<d[k]; i++){
			cout <<"Inserisci elemento "<<i+1<<" : ";
			cin >>array[i][k];
		}
	}
	cout << endl;
}

void stampa_array(){
	for (int k=0; k<n-1;k++){
		cout<<"Array "<<k+1<<" : "<<endl;
		for (int i=0; i<d[k]; i++){
			cout.width(lar);
			cout << array[i][k];
		}
		cout<<endl;
	}
}

void swap (int i, int k){
	int buff;
	buff = array[i][k];
	array[i][k] = array[i+1][k];
	array[i+1][k] = buff;
}

void ordina_tutto(){
	for (int k=0; k<n-1; k++){		
		bool scambio = true;
		while (scambio){
			scambio = false;
			for (int i=0; i<d[k]-1 ;i++){
				if (array[i][k] > array[i+1][k]){
					swap(i,k);
					scambio = true;
				}
			}
		}
	}
}

void elimina_duplicati(){
	for (int k=0; k<n-1; k++){
		for (int i=0; i<d[k]-1; i++){
			if (array[i][k]==array[i+1][k]){
				for (int j = i; j<d[k];j++){
					if (array[j][k] == array[j+1][k]) i--;
					array[j][k] = array[j+1][k];
					}
				d[k]--;
			}
		}
	}
}

int aggiungi_tutto(){
	int max_len=0;
	for (int i=0;i<n-1;i++){
		//cout <<"Lunghezza"<<d[i]<<endl;
		max_len=max_len+d[i];
	}
	
	int c=0;
	for (int k=0; k<n-1; k++){
		for (int i=0; i<d[k]; i++){
			array[c][n] = array[i][k];
			c++;
		}
	}
	return max_len;
}

void stampa_res(int m){
	cout<<endl<< "Array somma : "<<endl;
	for (int i = 0; i < m; i++){
		cout.width(lar);
		cout << array[i][n];
	}
}
