#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
	vector <int> elementy;

	int liczba_kartek;
	cin >> liczba_kartek;

	for (int kartka = 1; kartka <= liczba_kartek; kartka++){
		int liczba_elementow;
		cin >> liczba_elementow;

		for (int numer_elementu = 1; numer_elementu <= liczba_elementow; numer_elementu++){
			int element;
			cin >> element;
			elementy.push_back(element);
		}

		for (unsigned int i = 0; i < elementy.size(); i++){
			if (i % 2)
				cout << elementy[i] << " ";
		}

		for (unsigned int i = 0; i < elementy.size(); i++){
			if (!(i % 2))
				cout << elementy[i] << " ";
		}

		cout << endl;
		elementy.clear();
	}

	return 0;
}