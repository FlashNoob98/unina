#include <iostream>
using namespace std;

int main(){
  int dim,n;
  bool clone;
  cout << "Inserisci dimensione array: "; //definisco la dimensione dell'array di interi
  cin >> dim;
  int A[dim]={0}; //inizializzo a 0 l'array
  for(int i=0;i<dim;i++){
    do {
      clone = 0;
      cout << "Inserisci elemento "<<i+1<<" nell'array: ";
      cin >> n;
      for (int k=0;k<dim;k++){ //verifico se per ogni elemento dell'array il valore coincide
        if (n==A[k])  clone = 1; //se sì pongo clone a 1
      }
    if (clone) cout <<"Elemento già inserito"<<endl;
  } while(clone); //ripeto l'input se ho trovato un clone altrimenti
                  //inserisco il valore nell'array e riprendo il ciclo
    A[i]=n;
  }
  cout <<"Ecco l'array:"<<endl;
  for(int i=0;i<dim;i++){ //output array
    cout << A[i]<<" ";
  }
  cout <<endl;
}
