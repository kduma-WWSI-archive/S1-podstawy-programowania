#include <iostream>
#include <vector>

using namespace std;

int main () {
	vector <bool> wyniki(37, false);

	for (int i = 1; i <= 15; i++){
		int liczba;
		cin >> liczba;
		wyniki[liczba % 37 - 1] = true;
	}

	int liczba_reszt = 0;
	for (unsigned int i = 0; i < wyniki.size(); i++){
		if (wyniki[i])
			liczba_reszt++;
	}

	cout << liczba_reszt;

	return 0;
}