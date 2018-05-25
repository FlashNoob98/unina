//programma che inserisce e stampa n matrici
#include <iostream>
#define DIM 20	//dimensione massima per ogni matrice
#define lar 4	//larghezza casella matrice
#define max 5	//numero massimo di matrici
using namespace std;

int M[DIM][DIM][max];	//array di matrici
int R[max],C[max];		//array che contengono numero di righe e colonne per ogni matrice
void inserisci_matrici(int k);
void stampa_matrici(int k);

int main(){
	int n;
	cout << "In questo programma puoi inserire e stampare piu' matrici"<<endl;
	do{
		cout<<"Quante matrici ti servono? ";
		cin >> n;
		if (n<=max) cout << "Wow, hai bisogno di "<<n<<" matrici.."<<endl;
		else if (n>max){
			cout << "Al momento ne puoi prendere solo "<<max<<endl;
			cout << "Modifica il codice (max) per aumentare questo numero"<<endl;
		}
		else if (n==0) cout <<"E ciao.."<<endl;
	}while (n>max);

	inserisci_matrici(n);
	stampa_matrici(n);
	return 0;
}
	
void inserisci_matrici(int k){
	for (int q=0; q<k; q++){	//seleziono matrice
		cout <<endl<<"Inserisci matrice "<<q+1<<endl;
		cout<< "Inserisci numero di righe:   ";
		cin >> R[q];
		cout<< "Inserisci numero di colonne: ";
		cin >> C[q];
		
		for (int i=0; i<R[q]; i++){		//input matrice q+1
			cout <<endl<<"Inserisci riga "<<i+1<<endl;
			for (int j=0 ; j<C[q]; j++){
				cout<< "Elemento "<<j+1<<" : ";
				cin >> M[i][j][q];
			}
		}	
	}
}

void stampa_matrici (int k){
	for (int q=0; q<k; q++){	//selezione matrice
		cout <<endl<<"Matrice "<<q+1<<" :"<<endl;
		
		for (int i=0; i<R[q]; i++){		//classico output matrice
			for (int j=0 ; j<C[q]; j++){
				cout.width(lar);
				cout << M[i][j][q];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
