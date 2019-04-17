/* Programma per il calcolo dei valori caratteristici di un impianto semplice con turbina a gas
 * Fornito senza alcuna garanzia e per uso non professionale, libera la copia, la modifica e la ridistribuzione
 * Scritto da Olivieri Daniele
 */
#include <iostream>
using namespace std;
float T2,T3,P2,P3,P4;  //Valori dell'acqua
float Beta,Eta_globale,mdot,power,T4; //Parametri impianto
float T1=15,P1=1,k=1.4,mass=28.96,Cp=1.005; //atmosfera ISO
float lambda;


void schema(){
	cout << "Questo è un calcolatore dei valori caratteristici"<<endl;
	cout << "di un impianto con turbina a Gas semplice"<<endl;
	cout<<endl;
	cout<<"        --→→--(CC)--→→--     " << endl;
	cout<<"       |(2)          (3)|    " << endl;
	cout<<"       |                |    " << endl;
	cout<<"    |\\ |                | /|      ___" << endl;
	cout<<"    | \\|                |/ |     /" << endl;
	cout<<"    |C |================|TG|==(∼)---- " << endl;
	cout<<"    | /                  \\ |     \\___" << endl;
	cout<<"    |/                    \\| " << endl;
	cout<<"    |                      | " << endl;
	cout<<"    ↑                      ↓ " << endl;
	cout<<"    ↑(1)                (4)↓ " << endl;
	cout<<"    |                      | " << endl<<endl;
	return;
}

void input(){
	char ans='N';
	cout << "Questo programma utilizza i valori dell'atmosfera ICAO"<<endl;
	cout << "Desideri modificarli? (s/N) ";
	cin >> ans;
	if ((ans == 's') || (ans =='S')){ //parametri atmosfera ISO (facoltativo)
		cout<<"Inserisci il valore di T1 ("<<T1<<" °C): ";
		cin>>T1;
		cout<<"Inserisci il valore di P1 ("<<P1<<" atm): ";
		cin>>P1;
		cout<<"Fattore di espansione isoentropico k ("<<k<<" gas biatomici): ";
		cin>>k;
		cout<<"Inserisci la massa molare ("<<mass<<" kg/kmol): ";
		cin>>mass;
		cout<<"Inserisci il Cp: ("<<Cp<<" kJ/(kg*K)): ";
		cin>>Cp;
	}
	cout<<"Utilizzerò i seguenti valori: \nT1 = "<<T1<<"°C \nP1 = "<<P1<<" atm \nk = "<<k<<"  \nmassa = "<<mass<<" kg/kmol \nCp = "<<Cp<<" kJ/(kg*K)"<<endl;
	cout<<endl<<"Ora devi inserire tutti i parametri della macchina"<<endl; //Parametri impianto
	cout<<"Potenza (kW): "; cin >> power;
	cout<<"Efficienza (%): "; cin >> Eta_globale; Eta_globale=Eta_globale/100;
	cout<<"Rapporto di compressione beta: "; cin >> Beta;
	cout<<"Portata massica (kg/s): "; cin>>mdot;
	cout<<"Temperatura in uscita dalla turbina T4 (°C): "; cin>>T4;
	
	return;
}	

void calcolo_P2(){
	P2=Beta*P1;
	return;
}



int main(){
	schema();
	input();
	calcolo_P2();
	//cout <<P2;
	lambda=(k-1)/k;
	
	return 0;
}
