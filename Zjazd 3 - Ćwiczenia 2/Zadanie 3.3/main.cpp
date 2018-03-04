#include <iostream>

using namespace std;

int main () {
	int dzielniki[4] = { 2, 3, 5, 7 };
	int n;

	cout << endl << "Podaj liczbe n = ";
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		if (n % dzielniki[i] == 0){
			cout << dzielniki[i] << " ";
		}
	}

	return 0;
}