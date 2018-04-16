#include <iostream>
#include <bitset>
using namespace std;
int main(){
	long int n;
	cout << "Inserisci il numero fino al quale eseguire la conversione in binario: ";
	cin >>n; 
    for (int i = 0; i<=n; i++){
		cout <<i<<" "<< bitset<64>(i)<<endl;
    }
   return 0;
}
