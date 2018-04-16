/* convertitore decimale binario */
#include <iostream>
#include <cmath>
#define bit 8

using namespace std;
int main(){
	int num;
	bool bin[bit]={0};
	cout << "Questo programma esegue la conversione in binario di un dato numero inserito"<<endl;
	cout << "Inserisci il numero da convertire (max "<<pow(2,bit)-1<<"): "<<endl;
	cin >>num;
	for (int i=0; i<bit;i++){
		if (num%2!=0){
			bin[bit-i-1]=1;
		}
		num = num/2;
	}
	
	for (int i=0; i<bit;i++){
		cout <<bin[i];
	}
	
	cout <<endl;
	return 0;
}
