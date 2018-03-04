#include "wejscie.h"
#include "wyjscie.h"

#include<iostream>

using namespace std;

vector<double> pobierz_dane () {
	int n;

	cout << "Podaj liczbę n: ";
	cin >> n;

	switch ( drukuj_menu(n)) {
		default:
		case 1:
			return dane_z_klawiatury(n);

		case 2:
			return dane_losowe(n);
	}
}

vector<double> dane_z_klawiatury ( int n ) {
	vector<double> a(n, 0);

	cout << "Podaj " << n << " liczb oddzielonych spacją: " << endl;

	for ( int i = 0; i < a.size(); i++ ) {
		cin >> a[ i ];
	}

	cout << endl;

	return a;
}

vector<double> dane_losowe ( int n ) {
	vector<double> a(n, 0);

	int zakres_od, zakres_do;
	cout << "Podaj zakres losowanych liczb: " << endl;

	cout << "od:";
	cin >> zakres_od;

	cout << "do:";
	cin >> zakres_do;

	srand(unsigned(time(0)));

	zakres_od *= 100;
	zakres_do *= 100;

	for ( int i = 0; i < a.size(); i++ ) {
		a[ i ] = ( zakres_od + rand() % ( zakres_do + 1 - zakres_od ) ) / 100.0;
	}

	cout << "Wylosowany zostal nastepujacy zbior: " << endl;
	drukuj_tablice(a);
	cout << endl << endl;

	return a;
}