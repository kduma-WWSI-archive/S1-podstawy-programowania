#include <iostream>

using namespace std;

int main () {
	int n, a;

	cout << "Podaj n: ";
	cin >> n;

	cout << "Podaj " << n << " liczb: ";
	cin >> a;
	int maxi = a;
	for (int j = 2; j <= n; j++){
		cin >> a;
		if (a > maxi)
			maxi = a;
	}
	cout << "Największa liczba: " << maxi;

	return 0;
}