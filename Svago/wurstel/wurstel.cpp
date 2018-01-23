#include <iostream>
using namespace std;

int  main() {
  int n;
  cout <<"Quanti wurstel vuoi? ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Eccoti "<<i+1<<" wurstel :)"<<endl;
  }
  return 0;
}
