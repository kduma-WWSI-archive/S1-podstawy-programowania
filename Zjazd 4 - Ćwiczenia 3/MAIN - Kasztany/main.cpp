#include <iostream>

using namespace std;

int main () {
	int d, n, a;
	cin >> d;

	for (int i = 1; i <= d; i++){
		int suma = 0;
		cin >> n;
		for (int j = 1; j <= n; j++){
			cin >> a;
			suma += a;
		}
		cout << suma << endl;
	}

	return 0;
}