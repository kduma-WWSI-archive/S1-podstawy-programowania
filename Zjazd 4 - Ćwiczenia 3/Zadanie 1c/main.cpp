#include <iostream>

using namespace std;

int main () {
	int n;

	cout << "Podaj n: ";
	cin >> n;

	bool czy_pierwsza = true;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			czy_pierwsza = false;
	cout << "Liczba " << n << " ";
	if (czy_pierwsza)
		cout << "jest liczba pierwsza!" << endl;
	else
		cout << "nie jest liczba pierwsza!" << endl;

	return 0;
}