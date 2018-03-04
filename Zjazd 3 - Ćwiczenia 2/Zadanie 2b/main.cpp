#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double x, wyn;

	cout << endl << "Podaj x = ";
	cin >> x;

	if (x < 0)
		wyn = sqrt(-x);
	else if (x > 10)
		wyn = sqrt(x - 10);
	else
		wyn = sqrt(10 - x);

	cout << endl << "Wynik: " << wyn;

	return 0;
}