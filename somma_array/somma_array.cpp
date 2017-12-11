#include <iostream>
#define r 3;
#define c 4;
using namespace std;
int main()
{
	int righe=r;
	int colonne=c;
	int m[righe][colonne]={0};
	
	for (int i=0; i<righe-1; i++){			//input
		for (int j=0; j<colonne; j++){
			cout << "Inserisci elemento riga "<<i+1<<" colonna "<<j+1<<": ";
			cin >> m[i][j];
			m[righe-1][j]+=m[i][j]; //calcolo
		}
	}
	
	for (int i=0; i<righe; i++){			//output
		for (int j=0; j<colonne; j++){
			cout.width(3);
			cout << m[i][j];
		}
		cout <<endl;
	}
	return 0;
}

