#include <iostream>

using namespace std;

int main () {
	int n, a;
	cin >> n;

	for (int i = 1; i <= n; i++){
		cin >> a;
		cout << (a % 2 ? "nieparzysta" : "parzysta") << endl;
	}

	return 0;
}