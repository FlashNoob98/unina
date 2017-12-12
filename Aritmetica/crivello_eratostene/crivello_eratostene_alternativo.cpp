#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Inserisci dimensione array: ";
	cin >> n;
	bool set[n]={0};

	for (int i = 1;i<n;i++){
		if (set[i+1]) //numero già valutato, salto il ciclo //utilizzo i+1 per usare array della stessa dimensione del setaccio
			goto jump;
		for(int j=(2*i)+1;j<n;j++){
				if(j%(i+1)==0) //condizione modulo per divisibilità
				set[j] = true;
		}
		jump:
		if (!((i)%10))
			cout <<endl;
			
		if ((!set[i])&&i>1){
			cout.width(6);
			cout << i;
		}

	}

	/*for (int j=2;j<n;j++){ //output
		if (!set[j]){
			cout.width(6);
			cout << j;
		}
		if (!(j%10))
			cout <<endl;
	}*/
	cout <<endl;

	return 0;
}

