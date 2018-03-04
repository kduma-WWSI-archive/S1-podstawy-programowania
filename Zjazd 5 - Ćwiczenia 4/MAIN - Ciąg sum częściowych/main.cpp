#include <iostream>
#include <vector>

using namespace std;

int main () {
	int n;
	cin >> n;

	vector <int> sumy(n);

	for (int i = 1; i <= n; i++){
		int liczba;
		cin >> liczba;

		if (i == 1){
			sumy[i - 1] = liczba;
			continue;
		}

		sumy[i - 1] = sumy[i - 2] + liczba;
	}

	for (unsigned int i = 0; i < sumy.size(); i++){
		cout << sumy[i] << " ";
	}

	return 0;
}