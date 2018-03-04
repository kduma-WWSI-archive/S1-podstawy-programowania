#include <iostream>

using namespace std;

int main () {
	double a, b, wyn;
	char op;
	cin >> a >> op >> b;

	switch (op)
	{
		case '+':
			wyn = a + b;
			break;

		case '-':
			wyn = a - b;
			break;

		case '*':
			wyn = a * b;
			break;

		case '/':
			wyn = a / b;
			break;

		default:
			cout << "Niedozwolona operacja: " << op;
			return 1;
	}

	cout << endl << "Wynik: " << a << " " << op << " " << b << " = " << wyn;

	return 0;
}