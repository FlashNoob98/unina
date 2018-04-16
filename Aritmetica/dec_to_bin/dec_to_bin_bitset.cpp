#include <iostream>
#include <bitset>
using namespace std;
int main(){
	long int n;
	cout << "Inserisci il numero fino al quale eseguire la conversione in binario: ";
	cin >>n; 
    for (int i = 0; i<=n; i++){
		if (i<256) 					cout <<i<<" "<< bitset<8>(i)<<endl;
		else if (i<65536)			cout <<i<<" "<< bitset<16>(i)<<endl;
		else if (i<16777216)		cout <<i<<" "<< bitset<24>(i)<<endl;
		else if (i<4294967296)  	cout <<i<<" "<< bitset<32>(i)<<endl;
		else if (i<1099511627776)	cout <<i<<" "<< bitset<40>(i)<<endl;
		else 						cout <<i<<" "<< bitset<64>(i)<<endl;
    }
	return 0;
}
