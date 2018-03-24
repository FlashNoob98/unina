#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14159265

int main(){
	int angolo=0;
	float V0=0,g=9.81;
	char terra='S';
	cout<<"Calcolatore moto parabolico"<<endl;
	cout << "Inserisci prima l'angolo"<<endl;
	
	do{
		cout << "Deve essere compreso tra 0 e 180°: ";	//input angolo
		cin >> angolo;
	}while(!(angolo<=180&&angolo>=0));
	
	
	cout << "Inserisci la velocita' iniziale in m/s"<<endl;	//input vel iniziale
	do{
		cout << "Deve essere maggiore di 0: ";
		cin >> V0;
	}while(!(V0>0));
	
	cout <<"Ti trovi sulla terra? (S/N): ";	//modifica g se necessario
	cin>>terra;
	if (terra=='N'||terra=='n'){
		do{
			cout << "Inserisci l'accelerazione di gravita': ";
			cout << "Deve essere maggiore di 0: ";
			cin >> g;
		}while(!(g>0));
	}
	cout <<"Risultati con angolo di "<<angolo<<"° e velocita' di "<<V0<<" m/s "<<endl; //calcolo e output
	if(terra=='N'||terra=='n') cout <<" e accelerazione di "<<g<<" m/s^2"<<endl;
	cout <<endl<<"Altezza massima: "<<setiosflags(ios::fixed) << setprecision(2)<<(0.5*pow(V0*sin(angolo*PI/180),2))/g<<" metri."<<endl;
	cout <<"Tempo di caduta: "<<setiosflags(ios::fixed) << setprecision(2)<<(2*V0*sin(angolo*PI/180))/g<<" secondi."<<endl;
	cout <<"Gittata:         "<<setiosflags(ios::fixed) << setprecision(2)<<(2*pow(V0,2)*sin(angolo*PI/180)*cos(angolo*PI/180))/g<<" metri."<<endl;
	}
