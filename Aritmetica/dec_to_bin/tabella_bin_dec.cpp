#include <iostream>
#include <cmath>
#define larghezza_output 8
using namespace std;

void stampa_bin (int num){
	int bit = log2(num)+1;
	bool bin[bit]={0};
	for (int i=0; i<bit;i++){
		if (num%2!=0) bin[bit-i-1]=1;
		num = num/2;
	}
	for (int i=0; i<bit;i++){
		cout << bin[i];
	}
}

int main(){
	int n;
	cout << "Usare con cautela"<<endl;
	cout << "Inserisci il numero fino al quale eseguire la conversione in binario: ";
	cin >> n;
	cout.width(larghezza_output);
	cout <<"0"<<" 0"<<endl;
	for (int i=1; i<=n; i++){
		cout.width(larghezza_output);
		cout << i<<" ";
		stampa_bin(i);
		cout <<endl;
	}
	cout <<endl;
	return 0;
}
