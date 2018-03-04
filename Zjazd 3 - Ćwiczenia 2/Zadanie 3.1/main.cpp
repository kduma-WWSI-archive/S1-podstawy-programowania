#include <iostream>

using namespace std;

int main () {
	int liczby[4];

	cout << endl << "Podaj liczby: ";
	cin >> liczby[0] >> liczby[1] >> liczby[2] >> liczby[3];

	for (int i = 0; i < 4; i++)
	{
		if (liczby[i] % 2 == 0){
			cout << "TAK";
			return 0;
		}

	}

	cout << "NIE";

	return 0;
}