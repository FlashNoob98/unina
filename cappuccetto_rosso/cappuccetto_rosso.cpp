#include <iostream>
using namespace std;
int main()
{
	int oggi,nata_cr,focaccin,focaccout; //inizio input
	cout << "Ciao, benvenuto nella storia interattiva di cappucccetto Rosso,"<<endl;
	cout << "inserisci l'anno di nascita di cappuccetto Rosso: ";
	cin >> nata_cr;
	cout << "Non ricordo in che anno siamo, sapresti dirmelo? ";
	cin >> oggi;
	cout << "Quante focaccine ha cappuccetto rosso nel cestino? ";
	cin >> focaccin;
	cout << "Cappuccetto rosso sta camminando nel bosco ma ad un certo punto"<<endl;
	cout<<"il lupo le ruba delle focaccine, quante ne ruba? ";
	cin >> focaccout; //fine input

	//storia
	cout << endl<<"C'era una ";
	if ((oggi-nata_cr)<=12)
		cout <<"bambina";
	else if ((oggi-nata_cr)<=20)
		cout <<"ragazza";
	else
		cout <<"donna";
	cout << " di nome Cappuccetto Rosso"<<endl<< "che si recava dalla sua nonnina al di là del bosco"<<endl;
	cout << "per portarle "<<focaccin<<" focaccine calde calde."<<endl;
	cout <<"Durante il tragitto il Lupo Cattivo rubò a Cappuccetto Rosso ben"<<endl;
	cout << focaccout <<" focaccine."<<endl;
	cout << "Giunta infine dalla nonna, cappuccetto Rosso le porse il cestino"<<endl<< "e la nonna le disse:"<<endl;
	if ((focaccin-focaccout)==1)
		cout << "Grazie per questa focaccina <3";
	else if (focaccin>focaccout)
		cout << "grazie per queste "<<focaccin-focaccout<< " focaccine <3";
	else
		cout << "grazie per avermi fatto visita, avrei preferito delle focaccine :(";
	return 0;
}
