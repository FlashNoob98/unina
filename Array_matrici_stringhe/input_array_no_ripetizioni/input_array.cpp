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
      for (int k=0;k<dim;k++){
        if (n==A[k])  clone = 1;
      }
    if (clone) cout <<"Elemento già inserito"<<endl;
    } while(clone);

    A[i]=n;
  }
  cout <<"Ecco l'array:"<<endl;
  for(int i=0;i<dim;i++){
    cout << A[i]<<" ";
  }
  cout <<endl;
}
