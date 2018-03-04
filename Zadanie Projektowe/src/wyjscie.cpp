#include "wyjscie.h"

#include<iostream>

using namespace std;

int drukuj_menu ( int n ) {
	cout << "Wybierz jakich danych chcesz użyć:" << endl;
	cout << " 1. Chcę podać " << n << " liczb ręcznie za pomocą klawiatury" << endl;
	cout << " 2. Niech komputer wylosuje za mnie " << n << " liczb" << endl << endl;
	cout << "Wybieram: ";

	int wybor;
	cin >> wybor;

	if ( wybor != 1 && wybor != 2 ) {
		cout << endl << "ERROR: Podana opcja nie istnieje! Sprubój jeszcze raz!" << endl << endl;
		return drukuj_menu(n);
	}

	return wybor;
}

void drukuj_tablice ( const vector<double> &a ) {
	for ( int i = 0; i < a.size(); i++ ) {
		cout << "a[" << i << "] = " << a[ i ] << ", ";
	}
}

void drukuj_wynik ( vector<double> &a, pair<double, int> &dominanta ) {
	cout << "Po przeprowadzeniu operacji max(a[i], a[i-1]) powstal nastepujacy zbior: " << endl;
	drukuj_tablice(a);
	cout << endl << endl;
	cout << "Najczęściej występująca liczba w zbiorze a jest liczba " << dominanta.first << " ktora wystepuje "
	     << dominanta.second << " razy" << " ";
}