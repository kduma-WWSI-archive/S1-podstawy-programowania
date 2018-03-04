#include <iostream>

using namespace std;

int main () {
	int a, b;

	cout << endl << "Podaj liczby a i b: ";
	cin >> a >> b;

	if (a%b == 0 || b%a == 0)
		cout << "TAK";
	else
		cout << "NIE";
	
	return 0;
}