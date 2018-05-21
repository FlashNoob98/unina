#include <iostream>
using namespace std;

const int DIM =10;
int A[DIM][DIM];

void riempi_matrice(int A[][DIM], int n, int m){
	for(int i=0;i<n;i++){
		cout << "Inserisci "<<i+1<<"° riga"<<endl;
		for(int j=0;j<m;j++){
			cout<<"Inserisci elemento "<<j+1<<" : ";
			cin>>A[i][j];
			}
		}
	}
	
void stampa_matrice (int A[][DIM], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout <<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return;
	}

void scambia_righe(int A[][DIM]){
	int n;
	
	
	}

int main(){
	int n,m;
	cout << "Inserisci numero righe: ";
	cin >>n;
	cout << "Inserisci numero colonne: ";
	cin >>m;	
	riempi_matrice(A,n,m);
	cout <<endl<< "La matrice inserita e':"<<endl;
	stampa_matrice(A,n,m);
	do{
		scambia_righe(A);
	}while(true);
	
	return 0;
	}
