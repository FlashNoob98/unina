#include <iostream>
#include <cmath>
using namespace std;
float perimetro(float triangolo[3]){
	float p;
	for (int i=0;i<3;i++){
		p+=triangolo[i];
	}
	return p;
}

float superficie(float triangolo[3]){
	float p=perimetro(triangolo)/2;
	return sqrt(p*(p-triangolo[0])*(p-triangolo[1])*(p-triangolo[2]));
}

int main()
{
	float t[3]={0};
	cout << "Inserisci la lunghezza dei dati del triangolo:"<<endl;
	for (int i=0;i<3;i++){
		cout <<"Inserisci il "<<i+1<<"° lato: ";
		cin >> t[i];
	}
	cout << "Il perimetro vale: "<<perimetro(t)<<endl;
	cout << "L'area vale: "<<superficie(t)<<endl;
	return 0;
}

