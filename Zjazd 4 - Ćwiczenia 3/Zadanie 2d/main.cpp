#include <iostream>

using namespace std;

int main () {
	int m, n, a;
	cout << "Podaj n i m: ";
	cin >> n >> m;

	cout << "podaj " << n << " liczb" << endl;
	int suma = 0;
	for (int j = 1; j <= n; j++){
		cin >> a;
		suma += a;
	}
	cout << (suma%m ? "NIE" : "TAK");

	return 0;
}