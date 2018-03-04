#include "obliczenia.h"

using namespace std;

vector<double> wykonaj_obliczenia ( vector<double> a ) {
	for ( int i = 1; i < a.size(); i++ ) {
		a[ i ] = max(a[ i ], a[ i - 1 ]);
	}

	return a;
}

pair<double, int> licz_dominante ( const vector<double> &a ) {
	int najczestsza_liczba_wystapien = 0;
	double najczestsza_liczba = 0;

	for ( int i = 0; i < a.size(); i++ ) {
		int liczba_wystapien = 0;
		double liczba = a[ i ];

		for ( int j = 0; j < a.size(); j++ )
			if ( a[ j ] == liczba ) {
				liczba_wystapien++;
			}

		if ( liczba_wystapien > najczestsza_liczba_wystapien ) {
			najczestsza_liczba_wystapien = liczba_wystapien;
			najczestsza_liczba = liczba;
		}
	}

	return pair<double, int>(najczestsza_liczba, najczestsza_liczba_wystapien);
}
