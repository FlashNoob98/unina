#include <iostream>
using namespace std;

int main()
{
	bool sono_uguali = 1;
	int n;
	cout << "Immetti dimensione stringa: ";
	cin >> n;
	char a[n],b[n],c[2*n];
	
	cout << "Ora inserisci gli elementi di a:"<<endl;
	for(int i=0;i<n;i++){
		cout <<"Elemento "<<i+1<<" ";
		cin >> a[i];
		c[i] = a[i];	//copio nella prima parte di c
	}
	
	cout << "Ora inserisci gli elementi di b:"<<endl;
	for (int i=0;i<n;i++){
		cout <<"Elemento "<<i+1<<" ";
		cin >> b[i];
		c[n+i] = b[i];	//copio nella seconda parte di c
		if (a[i]!=b[i])
			sono_uguali = 0;
	}
	
	cout <<endl<< "Stringa concatenata:"<<endl<<c<<endl<<endl; //output stringa c
	
	if (sono_uguali)
		cout << "Le stringhe sono uguali"<<endl;
	else
		cout << "Le stringhe non sono uguali"<<endl;
	
	return 0;
}

