//sommatoria.cpp
#include <iostream>
using namespace std;
int main(){
	int n,s=0;
	cout << "Questo programma esegue una sommatoria dato un intero" << endl;
	do {
		cout << "Inserisci un intero compreso tra 0 e 10: ";
		cin >> n;}
	while (!((n>=0)&&(n<=10)));
	for (int i=0;i<=n;i++)
		s = s+i+(i*i);
	cout << "Il risultato della sommatoria è: " << s << endl;
	return 0;
}
