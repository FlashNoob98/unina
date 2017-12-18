#include  <iostream>
#include <cmath>
using namespace std;

void riempi_polinomio(float P[], int n){
  std::cout << "Inserisci il polinomio" << '\n';
  for (int i = 0; i < n; i++) {
    std::cout << "Inserisci il coefficiente di X^"<<n-i <<": ";
    std::cin >> P[i];
  }
	std::cout << "Inserisci il termine noto: ";
    std::cin >> P[n];
  return;
}

void stampa_polinomio(float P[],int n){ //TODO: se il termine noto è 0 resta stampato un +
  for (int i = 0; i <= n; i++) {
	if (P[i]==0) continue;
	else if(i==(n-1)&&P[i]==1)cout << "x + ";
	else if (i==(n-1))cout<<P[i] << "x + ";
	else if (P[i]==1&&i<n)cout << "x^"<<n-i<<" + ";
    else if(i<n)cout<<P[i] << "x^"<<n-i<<" + "; 
    else if (i==n)cout<<P[i];
  }
  cout <<endl;
}
double calcola_polinomio(float P[],int n,float x){
	double res=0;
	for (int i=0;i<=n;i++){
		res+=(pow(x,n-i)*P[i]);
	}
	return res;
	}
	
 int main() {
   int n;
   float x;
   double r;
   cout << "Inserisci il grado del polinomio: ";
   cin >> n;
   float p[n+1]={0};
   riempi_polinomio(p,n);	//input
   stampa_polinomio(p,n);	//output
   cout << "Inserisci il punto in cui calcolare il polinomio: ";
   cin >> x;
   r = calcola_polinomio(p,n,x);	//calcolo valore in x
   cout << "Risultato: "<<r<<endl;
   
   return 0;
 }
