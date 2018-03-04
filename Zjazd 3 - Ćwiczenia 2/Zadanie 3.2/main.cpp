#include <iostream>

using namespace std;

int main () {
	unsigned int liczby[3];
	unsigned int zwracana = 9;

	cout << endl << "Podaj liczby: ";
	cin >> liczby[0] >> liczby[1] >> liczby[2];


	for (int i = 0; i < 3; i++)
	{
		if (liczby[i] % 10 < zwracana % 10){
			zwracana = liczby[i];
		}
	}

	cout << zwracana;

	return 0;
}