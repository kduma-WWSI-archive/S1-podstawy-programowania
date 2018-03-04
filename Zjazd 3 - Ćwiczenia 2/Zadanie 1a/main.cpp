#include <iostream>
#include<cmath>

using namespace std;

int main () {
	double a, b, c;
	cout << "Podaj liczby a, b i c trojmianu kwadratowego: ";
	cin >> a >> b >> c;

	double delta = b*b - 4 * a*c;


	cout << endl << "Oto wyniki: " << endl;

	if (delta >= 0){
		cout << "DELTA = " << delta << endl;
		double x1 = (b*-1 - sqrt(delta)) / (2 * a);
		double x2 = (b*-1 + sqrt(delta)) / (2 * a);
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	else {
		cout << "DELTA = " << delta << " < 0" << endl;
	}

	return 0;
}