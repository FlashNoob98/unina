/* convertitore decimale binario */
#include <iostream>
#include <cmath>
//#define bit 8

using namespace std;
int main(){
	long int num,bit;
	cout << "Questo programma esegue la conversione in binario di un numero positivo inserito"<<endl;
	cout << "Inserisci il numero da convertire: ";
	cin >>num;
	if (num != 0){
		bit = log2(num)+1;
		bool bin[bit]={0};
		for (int i=0; i<bit;i++){
			if (num%2!=0){
				bin[bit-i-1]=1;
			}
			num = num/2;
		}
		cout << "Numero in binario: ";
		for (int i=0; i<bit;i++){
			cout <<bin[i];
		}
		cout<<endl<<"Bit usati: "<<bit<<endl;
	}
	else cout << "Hai inserito '0' :("<<endl;	
	return 0;
}
