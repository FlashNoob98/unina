//programma che inserisce e stampa n matrici
#include <iostream>
#define DIM 20
#define lar 4
#define max 20
using namespace std;

int M[DIM][DIM][max];
int R[max],C[max];
void inserisci_matrici(int k);
void stampa_matrici(int k);

int main(){
	int n;
	do{
		cout<<"Quante matrici ti servono? ";
		cin >> n;
		if (n>max) cout <<"Puoi inserire al massimo "<<max<<" matrici"<<endl;
		if (n==0) cout <<"E ciao.."<<endl;
	}while (n>max);
	inserisci_matrici(n);
	stampa_matrici(n);
}
	
void inserisci_matrici(int k){
	for (int q=0; q<k; q++){
		cout <<endl<<"Inserisci matrice "<<q+1<<endl;
		cout<< "Inserisci numero di righe: ";
		cin >> R[q];
		cout<< "Inserisci numero di colonne: ";
		cin >> C[q];
		for (int i=0; i<R[q]; i++){
			cout <<endl<<"Inserisci riga "<<i+1<<endl;
			for (int j=0 ; j<C[q]; j++){
				cout<< "Elemento "<<j+1<<" : ";
				cin >> M[i][j][q];
			}
		}	
	}
}

void stampa_matrici (int k){
	for (int q=0; q<k; q++){
		cout <<endl<<"Matrice "<<q+1<<" :"<<endl;
		
		for (int i=0; i<R[q]; i++){
			for (int j=0 ; j<C[q]; j++){
				cout.width(lar);
				cout << M[i][j][q];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
