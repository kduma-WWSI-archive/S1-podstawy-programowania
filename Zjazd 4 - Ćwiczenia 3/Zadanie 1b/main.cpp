#include <iostream>

using namespace std;

int main () {
	int n;

	cout << "Podaj n: ";
	cin >> n;

	int silnia = 1;
	for (int i = 1; i <= n; i++)
		silnia *= i;
	cout << "Silnia " << n << ": " << silnia << endl;

	return 0;
}