#include <iostream>

using namespace std;

int main () {
	int n;

	cout << "Podaj n: ";
	cin >> n;

	int suma = 0;
	for (int i = 1; i <= n; i++)
		suma += i;
	cout << endl << "Suma liczb od 1 do " << n << ": " << suma << endl;

	return 0;
}