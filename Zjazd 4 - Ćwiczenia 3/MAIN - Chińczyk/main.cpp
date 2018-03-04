#include <iostream>

using namespace std;

int main () {
	int n, a, szostek;
	cin >> n;

	for (int i = 1; i <= n; i++){
		cin >> a;
		if (a == 6)
			szostek++;
	}

	cout << szostek << endl;

	return 0;
}