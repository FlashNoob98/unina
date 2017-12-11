#include <iostream>
using namespace std;
int main()
{
	int n;
	do {
		cout <<"Inserisci un numero dispari: ";
		cin >> n;
	} while ((n%2)==0); //verifico se e' pari o dispari
	
	cout <<endl<<"Il numero "<<n<<" è dispari!";
	return 0;
}

