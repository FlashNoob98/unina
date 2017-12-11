#include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout << "inserisci un intero e ti restituirò il valore assoluto: ";
	cin >> n;
	cout << "il valore assoluto è: ";
	
	if (n>=0)
		cout << n;
	else 
		cout << -n;
	
	return 0;
}

