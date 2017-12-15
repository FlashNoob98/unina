#include <iostream>
using namespace std;

bool isPrime(int n){
	bool x = false;
	for (int i = 2; i<n;i++){
		if(n%i)
			x= true;
	}
	return x;
}
int main(){
	int n;
	cout << "inserisci un intero: ";
	cin >> n;
	for (int j=0;j<=n;j++){
		if (isPrime(j)){
			cout << j<<" è un numero primo"<<endl;
		}
	}
	return 0;
}
