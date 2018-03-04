#include <iostream>

using namespace std;

int main () {
	double x, y;


	cout << endl << "Poodaj liczby: ";
	cin >> y >> x;

	char op = '+';
	double wyn = x + y;

	if ((x - y) > wyn){
		op = '-';
		wyn = x - y;
	}

	if ((x * y) > wyn){
		op = '*';
		wyn = x * y;
	}

	if ((x / y) > wyn){
		op = '/';
		wyn = x / y;
	}

	cout << endl << x << " " << op << " " << y << " = " << wyn;

	return 0;
}