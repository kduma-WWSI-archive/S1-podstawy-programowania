#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
	int liczba_zarowek;
	cin >> liczba_zarowek;

	vector <bool> zarowki(liczba_zarowek, false);

	int liczba_nascisniec;
	cin >> liczba_nascisniec;

	for (int nacisniecie = 1; nacisniecie <= liczba_nascisniec; nacisniecie++){
		int nacisniety_pstrykacz;
		cin >> nacisniety_pstrykacz;

		zarowki[nacisniety_pstrykacz - 1] = !zarowki[nacisniety_pstrykacz - 1];
	}

	int liczba_zapalonych_zarowek = 0;
	for (unsigned int i = 0; i < zarowki.size(); i++){
		if (zarowki[i])
			liczba_zapalonych_zarowek++;
	}

	cout << liczba_zapalonych_zarowek;

	return 0;
}