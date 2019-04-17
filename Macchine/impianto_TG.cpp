/* Programma per il calcolo dei valori caratteristici di un impianto semplice con turbina a gas
 * Scritto da Olivieri Daniele
 * Fornito senza alcuna garanzia e per uso non professionale, libera la copia, la modifica e la ridistribuzione del seguente
 * 
 */
#include <iostream>
using namespace std;
float T2,T3,P2,P3,P4;  //Valori dell'acqua
float Beta,Eta,mdot,power,T4; //Parametri impianto
float T1=15,P1=1,k=1.4,mass=28.9; //atmosfera ISO
	
void input(){
	char ans='N';
	cout << "Questo programma utilizza i valori dell'atmosfera ICAO"<<endl;
	cout << "Desideri modificarli? (s/N)";
	cin >> ans;
	if ((ans == 's') || (ans =='S')){ //parametri atmosfera ISO (facoltativo)
		cout<<"Inserisci il valore di T1 (°C): ";
		cin>>T1;
		cout<<"Inserisci il valore di P1 (atm): ";
		cin>>P1;
		cout<<"Inserisci la costante k: ";
		cin>>k;
		cout<<"Inserisci la massa molare (Kg/Kmol): ";
		cin>>mass;
	}
	cout<<endl<<"Ora devi inserire tutti i parametri della macchina"<<endl; //Parametri impianto
	cout<<"Potenza (kW): "; cin >> power;
	cout<<"Efficienza (%): "; cin >> Eta; Eta=Eta/100;
	cout<<"Rapporto di compressione beta: "; cin >> Beta;
	cout<<"Portata massica (kg/s): "; cin>>mdot;
	cout<<"Temperatura in uscita dalla turbina T4 (°C): "; cin>>T4;
	
	return;
}	



int main(){
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
	
	
	
	input();
	
	return 0;
}
