#include <iostream>

using namespace std;

int main () {
	double x, w;
	cout << "Podaj x i w: ";
	cin >> x >> w;

	int licznik = 0;
	while (x > w) {
		licznik++;
		x /= 3;
	}

	cout << "Pileczka odbije sie " << licznik << " razy";

	return 0;
}