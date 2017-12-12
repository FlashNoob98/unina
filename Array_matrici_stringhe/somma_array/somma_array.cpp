#include <iostream>
#define r 3; //righe
#define c 4; //colonne
using namespace std;
int main()
{
	//int righe=r;
	//int colonne=c;
	int m[r][c]={0};
	
	for (int i=0; i<r-1; i++){			//input
		for (int j=0; j<c; j++){
			cout << "Inserisci elemento riga "<<i+1<<" colonna "<<j+1<<": ";
			cin >> m[i][j];
			m[r-1][j]+=m[i][j]; //calcolo
		}
	}
	
	for (int i=0; i<r; i++){			//output
		for (int j=0; j<c; j++){
			cout.width(3);
			cout << m[i][j];
		}
		cout <<endl;
	}
	return 0;
}