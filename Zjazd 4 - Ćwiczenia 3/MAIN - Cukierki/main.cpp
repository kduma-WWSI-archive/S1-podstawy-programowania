#include <iostream>

using namespace std;

int main () {
	int n, podelko_num = 0, podelko_liczba = 0;
	cin >> n;

	for (int i = 1; i <= n; i++){
		int  a;
		cin >> a;

		if (a % 2 == 0 && podelko_liczba < a)
		{
			podelko_liczba = a;
			podelko_num = i;
		}
	}

	cout << podelko_num << endl;

	return 0;
}