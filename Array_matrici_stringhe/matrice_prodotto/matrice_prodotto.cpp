#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Insrisci dimensione matrice: ";
	cin >> n;
	int r=n+1;
	int m[r][r]={0};
	cout <<"Insrisci prima riga:"<<endl;
	for (int i=1;i<r;i++) {
		cout << "Inserisci elemento "<<i<<" ";
		cin >> m[0][i];
	}
	
	cout << "Ora inserisci la colonna:"<<endl;
	for (int i=1;i<r;i++) {
		cout << "Inserisci elemento "<<i<<" ";
		cin >> m[i][0];
	}
	
	for(int i=1;i<r;i++){
		for(int j=1;j<r;j++){
			m[i][j]=m[0][j]*m[i][0];
		}
	}
	cout <<endl;
	for (int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			cout.width(4);
			cout << m[i][j];
		}
		cout<<endl;
	}
	cout <<endl;
	return 0;
}

