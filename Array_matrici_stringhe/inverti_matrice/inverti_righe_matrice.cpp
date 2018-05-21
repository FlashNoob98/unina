#include <iostream>
using namespace std;

#define larghezza 3
const int DIM =20;
int A[DIM][DIM];

void riempi_matrice(int A[][DIM], int n, int m){
	for(int i=0;i<n;i++){
		cout <<endl<<i+1<<"° riga"<<endl;
		for(int j=0;j<m;j++){
			cout<<"Inserisci l' elemento "<<j+1<<" : ";
			cin>>A[i][j];
			}
		}
	}
	
void stampa_matrice (int A[][DIM], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout.width(larghezza);
			cout <<A[i][j];
			}
		cout<<endl;
		}
	}

void stampa_trasposta(int A[][DIM], int n, int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout.width(larghezza);
			cout <<A[j][i];
			}
		cout<<endl;
		}
	}

void scambia_righe(int A[][DIM], int n,int m){
	int a,b,buff[m];
	if(n!=2){
		do{
			cout << "Inserisci la prima riga da scambiare: ";
			cin >> a;
			if (a>n) cout <<"La riga inserita è fuori dalla matrice"<<endl;
		}while(a>n);
		
		do{
		cout << "Inserisci la seconda riga da scambiare: ";
		cin >> b;
			if (b>n) cout <<"La riga inserita è fuori dalla matrice"<<endl;
			if (b==a) cout <<"Hai inserito due volte la stessa riga :/"<<endl;
		}while(b>n||b==a);
	}
	else{a=1;b=2;}
	for (int j=0; j<m;j++){
		buff[j]=A[a-1][j];
		A[a-1][j]=A[b-1][j];
		A[b-1][j]=buff[j];
	}

}

void scambia_colonne(int A[][DIM], int n,int m){
	int a,b,buff[m];
	if (m!=2){
		do{
			cout << "Inserisci la prima colonna da scambiare: ";
			cin >> a;
			if (a>m) cout <<"La colonna inserita è fuori dalla matrice"<<endl;
		}while(a>m);
		
		do{
		cout << "Inserisci la seconda colonna da scambiare: ";
		cin >> b;
			if (b>m) cout <<"La colonna inserita è fuori dalla matrice"<<endl;
			if (b==a) cout <<"Hai inserito due volte la stessa colonna :/"<<endl;
		}while(b>m||b==a);
	}
	else {a=1;b=2;}
	for (int i=0; i<n;i++){
		buff[i]=A[i][a-1];
		A[i][a-1]=A[i][b-1];
		A[i][b-1]=buff[i];
	}
	}

int main(){
	int n,m;
	char ans='0';
	cout<< "Benvenuto nel programma di gestione matrici"<<endl<<endl;
	cout << "Inserisci il numero di righe della matrice: ";
	cin >>n;
	cout << "Inserisci il numero di colonne della matrice: ";
	cin >>m;	
	riempi_matrice(A,n,m);
	cout <<endl<< "La matrice inserita è:"<<endl;
	stampa_matrice(A,n,m);
	if (n>1){
		while(ans!='n'&&ans!='N'){ //scambio righe
			cout <<endl<<"Vuoi scambiare le righe? (S/N) ";
			cin >> ans;
			if (ans=='s'||ans=='S'){
				scambia_righe(A,n,m);
				cout << "La matrice è: "<<endl;
				stampa_matrice(A,n,m);
				cout<<endl;
			}
		}
	}
	else cout <<"Impossibile scambiare le righe"<<endl;
	
	ans = 's';
	if (m>1){
		while(ans!='n'&&ans!='N'){ //scambio colonne
		cout <<"Vuoi scambiare le colonne? (S/N) ";
		cin >> ans;
			if (ans=='s'||ans=='S'){
				scambia_colonne(A,n,m);
				cout << "La matrice è: "<<endl;
				stampa_matrice(A,n,m);
				cout<<endl;
			}
		}
	}
	else cout <<"Impossibile scambiare le colonne"<<endl;
	
	cout <<endl<<"Risultato finale: "<<endl;
	stampa_matrice(A,n,m);
	
	cout <<endl<<"Matrice trasposta: "<<endl;
	stampa_trasposta(A,n,m);
	
	
	return 0;
	}
