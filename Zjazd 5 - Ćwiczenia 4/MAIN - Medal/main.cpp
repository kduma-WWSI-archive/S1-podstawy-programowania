#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
	vector <string> zwyciezcy;
	int liczba_medali_zwyciezcow = 0;

	int liczba_zawodnikow;
	cin >> liczba_zawodnikow;

	for (int zawodnik = 1; zawodnik <= liczba_zawodnikow; zawodnik++){
		string nazwisko_zawodnika;
		int madale_zawodnika;

		cin >> nazwisko_zawodnika;
		cin >> madale_zawodnika;

		if (madale_zawodnika == liczba_medali_zwyciezcow){
			zwyciezcy.push_back(nazwisko_zawodnika);
		}
		else if (madale_zawodnika > liczba_medali_zwyciezcow) {
			zwyciezcy.clear();
			zwyciezcy.push_back(nazwisko_zawodnika);
			liczba_medali_zwyciezcow = madale_zawodnika;
		}
	}

	for (unsigned int i = 0; i < zwyciezcy.size(); i++){
		cout << zwyciezcy[i] << endl;
	}

	return 0;
}