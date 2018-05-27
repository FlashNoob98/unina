#include <iostream>
#define DIM 20	//dimensione allocata
#define lar 5	//larghezza matrice
using namespace std;

int A[DIM][DIM], B[DIM][DIM], AB[DIM][DIM], BA[DIM][DIM];

void inserisci(int M[DIM][DIM], int &n, int &c);
void stampa(int M[DIM][DIM], int n, int c);
void prodotto (int M1[DIM][DIM], int M2[DIM][DIM],int M3[DIM][DIM], int r1, int c1);

int main (){
	int ar,ac,br,bc; //dimensioni righe e colonne delle due matrici
	
	cout << "Inserisci la prima matrice:"<<endl; 	//input
	inserisci(A,ar,ac);
	cout << "Inserisci la seconda matrice:"<<endl;
	inserisci(B,br,bc);
	cout << "Le matrici inserite sono:"<<endl;	//output
	cout << "Matrice A: "<<endl;
	stampa(A,ar,ac);
	cout<<endl;
	cout << "Matrice B: "<<endl;
	stampa(B,br,bc);
	
	if (ac==br){
		cout<<endl<<"Prodotto AxB";
		prodotto(A,B,AB,ar,bc);
		cout<<endl;
		stampa(AB,ar,bc);
	}
	if (bc==ar){
		cout<<endl<<"Prodotto BxA";
		prodotto(B,A,BA,br,ac);
		cout<<endl;
		stampa(BA,br,ac);
	}
	if (ac!=br&&bc!=ar) cout<<endl<< "Non posso eseguire il prodotto"<<endl;
	return 0;
}

void inserisci (int M[DIM][DIM], int &n, int &c){
	cout<<"Inserisci numero righe: ";
	cin >> n;
	cout<<"Inserisci numero colonne: ";
	cin >> c;
	for(int i=0; i<n; i++) //Input matrice
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

void stampa (int M[DIM][DIM], int n, int c){
	for(int i=0; i<n; i++) //STAMPA MATRICE
	{
		for(int j=0; j<c; j++)
		{
			cout.width(lar);
			cout << M[i][j];
		}
		cout << endl;
	}
}

void prodotto (int M1[DIM][DIM], int M2[DIM][DIM], int M3[DIM][DIM], int r1, int c1){ //prodotto
	for (int i=0; i<r1; i++){
		for( int j=0; j<c1; j++){
			for (int k=0; k<c1; k++){
				M3[i][j] += M1[i][k]*M2[k][j];
			}
		}
	}
}
