#include <iostream>
using namespace std;

int main()
{
	int n,m,riga_max,colonna_max,num_max;
	cout<<"Insersci numero di righe: ";
	cin >> n;
	cout<<"Insersci numero di colonne: ";
	cin >> m;
	int mat[n][m];
	for(int i=0; i<n; i++) //Input matrice
	{
		cout << "Inserisci la "<< i+1<< "° riga: "<<endl;
		for(int j=0; j<m; j++)
		{
			cout << "Inserisci elemento "<<j+1<<" : ";
			cin >> mat[i][j]; //input
		}
		cout << endl;
	}
	
	num_max=mat[0][0];
	
	cout << "Ecco la matrice che hai inserito:"<<endl<<endl;
	for(int i=0; i<n; i++) //STAMPA MATRICE
	{
		for(int j=0; j<m; j++)
		{
			cout.width(3);
			cout << mat[i][j];
			if (mat[i][j]>num_max){
				num_max=mat[i][j];
				riga_max=i;
				colonna_max=j;
			}
			
		}
		cout << endl;
	}
	cout <<"Riga contenente il numero massimo: "<<endl;
	for (int i=0; i<m;i++){
		cout << mat[riga_max][i]<<" ";
	}
	cout <<endl<<endl<<"Colonna contenente il numero massimo: "<<endl;
	for (int i=0; i<n;i++){
		cout << mat[i][colonna_max]<<endl;
	}
	cout<< endl;
}
