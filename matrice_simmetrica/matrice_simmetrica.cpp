/* Programma per...
 * vedere se una matrice è simmetrica
 */
#include <iostream>
using namespace std;


int main()
{
	int n;
	bool err=0;
	cout<<"Con questo programma potrai facilmente verificare la simmetria della tua matrice"<<endl;
	cout<<"Insersci il grado della matrice: ";
	cin >> n;
	int mat[n][n];
	for(int i=0; i<(n); i++) //Input matrice
	{
		cout << "Inserisci la "<< i+1<< "° riga: "<<endl;
		for(int j=0; j<n; j++)
		{
			cin >> mat[i][j]; //input
		}
		cout << endl;
	}
	
	cout << "Ecco la matrice che hai inserito:"<<endl<<endl;
	for(int i=0; i<n; i++) //STAMPA MATRICE
	{
		for(int j=0; j<n; j++)
		{
			cout.width(3);
			cout << mat[i][j];
		}
		cout << endl;
	}
			
	for(int i=0; i<=(n/2); i++) //Controlla simmetria
	{
		for(int j=0; j<(n); j++)
		{
			if ((mat[i][j])!= (mat[j][i])) //verifica
			{
				err =1;
			}
		}
	}	
	cout << endl;
	if (err==1)
	{
		cout << "La matrice non è simmetrica!";
	}
	else
	{
		cout << "La matrice è simmetrica!";
	}
	return 0;
}

