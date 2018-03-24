#include <iostream>
#define dim_array 10
using namespace std;
//RICORDA: a<b<c

void input_array(char input[dim_array]){
	cout <<"Inserisci gli elementi nell'array, devono essere a, b o c"<<endl;
	for (int i=0;i<dim_array;i++){
		do{
			cout << "Inserisci il "<<i+1<<"° elemento: ";
			cin >> input[i];
		}while(!((input[i]=='a')||(input[i]=='b')||(input[i]=='c')));
	}
}
void output_array(char input[dim_array]){
	for (int i=0;i<dim_array;i++)
	cout <<input[i]<<" ";
	cout <<endl;
}
void swap (char input[dim_array],int i){
	char buff;
	buff = input[i];
	input[i] = input[i+1];
	input[i+1] = buff;
}
void sort_array(char input[dim_array]){
	bool scambio = true;
	while (scambio){
		scambio = false;
		for (int i=0; i<dim_array-1 ;i++){
			if (input[i] > input[i+1]){
				swap(input,i);
				scambio = true;
			}
		}
	}
}

int main (){
	char array[dim_array];
	input_array(array);
	cout << "L'array inserito è:"<<endl;
	output_array(array);
	sort_array(array);
	cout << "L'array ordinato è:"<<endl;
	output_array(array);
	cout << endl;
return 0;
}
