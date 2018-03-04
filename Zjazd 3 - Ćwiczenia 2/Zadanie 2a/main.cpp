#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double x, wyn;

	cout << endl << "Podaj x = ";
	cin >> x;

	if (x >= 1)
		wyn = pow(x - 1, 2);
	else
		wyn = pow(x + 1, 2);

	cout << endl << "Wynik: " << wyn;

	return 0;
}