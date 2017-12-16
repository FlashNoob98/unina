#include <iostream>
using namespace std;

bool isPrime(int n){
	bool x = true;
	for (int i = 2; i<n;i++){
		if(n%i==0)
			x= false;
	}
	return x;
}
int main(){
	int n;
	cout << "Inserisci un intero: ";
	cin >> n;
	for (int j=1;j<=n;j++){
		if (isPrime(j)){
			cout << j<<" è un numero primo"<<endl;
		}
	}
	return 0;
}
