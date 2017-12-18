#include <iostream>
using namespace std;

int fatt(int n){
	int sum=1;
	for (int i = 2; i<=n;i++){
		sum*=i;
	}
	return sum;
}

int cbin(int n, int k){
	return (fatt(n)/(fatt(k)*fatt(n-k)));
}

int catalan(int n){
	return cbin(2*n,n)/(n+1);
}

int main()
{
	int f,n,k;
	for(int i=1;i<=6;i++){
		cout <<i<<": "<<catalan(i)<<endl;
	}
	cout <<"Inserisci coefficiente di Catalan: ";
	cin >> n;
	cout << catalan(n)<<endl;
	cout << "inserisci fattoriale: ";
	cin >>f;
	cout << fatt(f)<<endl;
	do{cout <<endl<<"inserisci n>k:"<<endl;
	cout <<"N: ";
	cin>>n;
	cout <<"K: ";
	cin>>k;
	}while(n<k);
	cout<<"Risultato: "<<cbin(n,k)<<endl;
	
	
	return 0;
}

