#include  <iostream>
#include <cmath>
#include <vector>
using namespace std;

void riempi_polinomio(int P[], int n){
  cout << "Inserisci il polinomio" << '\n';
  for (int i = 0; i < n; i++) {
    cout << "Inserisci il coefficiente di X^"<<n-i <<": ";
    cin >> P[i];
  }
	cout << "Inserisci il termine noto: ";
  cin >> P[n];
  return;
}

void stampa_polinomio(int P[],int n){ //TODO: se il termine noto è 0 resta stampato un +
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
double calcola_polinomio(int P[],int n,float x){
	double res=0;
	for (int i=0;i<=n;i++){
		res+=(pow(x,n-i)*P[i]);
	}
	return res;
	}

void trova_divisori(int P[],int n,vector<float> divisori){
  vector<int> numeratore;
  vector<int> denominatore;

  for (int i = 1; i <= P[n]; i++) { //divisori termine noto
    if ((P[n]%i)==0) {
      numeratore.push_back(i);
      //numeratore.push_back(-i);
      //cout <<i<<endl;
    }
  }
  cout <<endl; //debug
  for (int i = 1; i <= P[0]; i++) { //divisori coefficiente di grado massimo
    if ((P[0]%i)==0) {
      denominatore.push_back(i);
      denominatore.push_back(-i);
      //cout <<i<<endl;
    }
  }
  //cout<<endl;
  for (int i = 0; i < int(numeratore.size()); i++){
    for (int j = 0; j < int(denominatore.size()); j++){
      //if (denominatore[j]!=0&&numeratore[i]!=0) {
      divisori.push_back(numeratore[i]/denominatore[j]);
      //cout << numeratore[i]<<" "<<denominatore[j] << '\n'; //debug
      //}
    }
  }
  /*
  for divisori ecc calcola_polinomio==0;
  */

  return;
}
/*
void stampa_zeri(float P[],int n){
}*/


 int main() {
   int n;
   float x;
   double r;
   vector<float> divisori;

   cout << "Inserisci il grado del polinomio: ";
   cin >> n;
   int p[n+1]={0};

   riempi_polinomio(p,n);	//input
   stampa_polinomio(p,n);	//output
   cout << "Inserisci il punto in cui calcolare il polinomio: ";
   cin >> x;
   r = calcola_polinomio(p,n,x);	//calcolo valore in x
   cout << "Risultato: "<<r<<endl;
   trova_divisori(p,n,divisori);
   //cout <<"Il polinomio vale 0 per x uguale a: "<<stampa_zeri(p,n)<<endl;
   return 0;
 }
