// ordina una matrice
#include <iostream>
#define DIM 20
#define lar 4

using namespace std;
int A[DIM][DIM];

void swap_riga(int M[][DIM], int i);
void inserisci (int M[][DIM], int &r, int &c);
void stampa (int M[][DIM], int r, int c);
void ordina_righe(int M[][DIM], int r, int c);
void swap_colonna(int M[][DIM], int i,int c);
void ordina_colonne(int M[][DIM], int r, int c);

int main(){
	int r,c;
	inserisci(A,r,c);
	cout<<"Matrice inserita:"<<endl;
	stampa(A,r,c);
	cout<<"Matrice ordinata lungo le righe: "<<endl;
	ordina_righe(A,r,c);
	stampa(A,r,c);
	cout<<"Matrice ordinata lungo le righe e poi colonne: "<<endl;
	ordina_colonne(A,r,c);
	stampa(A,r,c);
	
	}
	
void inserisci (int M[][DIM], int &r, int &c){
	cout<< "Inserisci numero di righe: ";
	cin>> r;
	cout <<"Inserisci numero colonne:  ";
	cin >> c;
	
	for(int i=0; i<r; i++) //Input matrice
	{
		cout << "Inserisci la "<< i+1<< " riga: "<<endl;
		for(int j=0; j<c; j++)
		{
			cout << "Inserisci elemento "<<j+1<<" : ";
			cin >> M[i][j]; //input
		}
		cout << endl;
	}
}

void swap_riga(int M[][DIM], int r,int i){
	int buff;
	buff = M[r][i];
	M[r][i] = M[r][i+1];
	M[r][i+1] = buff;
	}

void ordina_righe(int M[][DIM], int r, int c){
	for(int i=0;i<r;i++){
		bool scambio = true;
		while (scambio){
			scambio = false;
			for (int j=0; j<c-1 ;j++){
				if (M[i][j] > M[i][j+1]){
					swap_riga(M,i,j);
					scambio = true;
				}
			}
		}
	}
}

void stampa (int M[][DIM], int r, int c){		
	for (int i=0; i<r; i++){		//classico output matrice
		for (int j=0 ; j<c ;j++){
			cout.width(lar);
			cout << M[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}

void swap_colonna(int M[][DIM], int i,int c){
	int buff;
	buff = M[i][c];
	M[i][c] = M[i+1][c];
	M[i+1][c] = buff;
}

void ordina_colonne(int M[][DIM], int r, int c){
	for(int j=0;j<c;j++){
		bool scambio = true;
		while (scambio){
			scambio = false;
			for (int i=0; i<r-1 ;i++){
				if (M[i][j] > M[i+1][j]){
					swap_colonna(M,i,j);
					scambio = true;
				}
			}
		}
	}
}
