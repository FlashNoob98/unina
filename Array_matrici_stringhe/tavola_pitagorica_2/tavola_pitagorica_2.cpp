#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Inserisci la grandezza della tavola pitagorica: ";
	cin >> n;
	int m[n][n]={0};
	
	for(int i=1; i<=n; i++)
	{
		for(int y=1; y<=n; y++)
		{
			m[i][y] = y*i;
			cout.width(4);
			cout << m[i][y];
			
		}
		cout << endl;
	}
	
	return 0;
}

