#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Inserisci dimensione array: ";
	cin >> n;
	bool set[n+1]={0};
	for (int i = 2;i<=n;i++){
		if (set[i])
			continue;
		for(int j=2*i;j<=n;j+=i){
				set[j] = true;
		}
	}
	
	for (int j=1;j<n;j++){
		if (!set[j]){
			cout.width(6);
			cout << j;
		}
		if (!(j%10))
			cout <<endl;
	}
	
	return 0;
}

