#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double x, y, wyn;

	cout << endl << "Podaj x = ";
	cin >> x;

	cout << endl << "Podaj y = ";
	cin >> y;

	if (x*x > y*y)
		wyn = sqrt(x*x - y*y);
	else if (x*x < y*y)
		wyn = sqrt(y*y - x*x);
	else
		wyn = 0;

	cout << endl << "Wynik: " << wyn;

	return 0;
}