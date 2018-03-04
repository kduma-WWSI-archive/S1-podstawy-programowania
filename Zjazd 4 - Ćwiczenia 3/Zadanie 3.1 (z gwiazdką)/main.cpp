#include <iostream>
#include <cmath>

//#define TEST_DATA

using namespace std;

double funkcja_a ( double x, int stop ) {
	double wyraz = 1;
	double y = wyraz;
	for ( int n = 1; n <= stop; ++n ) {
		y += wyraz = wyraz * x / n;
	}
	return y;
}

double funkcja_b ( double x, int stop ) {
	double wyraz = x;
	double y = wyraz;
	for ( int n = 1; n <= stop; ++n ) {
		y += wyraz = -1 * wyraz * x * x / (2*n*(2*n+1));
	}
	return y;
}

double funkcja_c ( double x, int stop ) {
	double wyraz = 1;
	double y = wyraz;
	for ( int n = 1; n <= stop; ++n ) {
		y += wyraz = -1 * wyraz * x * x / (2*n*(2*n-1));
	}
	return y;
}

int main () {

	cout.precision(10);

	#ifndef TEST_DATA
		double x;
		int stop;

		cout << "                 x = ";
		cin >> x;
		cout << "              stop = ";
		cin >> stop;
	#else
		double x = 5;
		int stop = 100;

		cout << "                 x = " << x << endl;
		cout << "              stop = " << stop << endl;
	#endif

	cout << endl;

	cout << "            exp(x) = " << exp(x) << endl;
	cout << "funkcja_a(x, stop) = " << funkcja_a(x, stop) << endl;

	cout << endl;

	cout << "            sin(x) = " << sin(x) << endl;
	cout << "funkcja_b(x, stop) = " << funkcja_b(x, stop) << endl;

	cout << endl;

	cout << "            cos(x) = " << cos(x) << endl;
	cout << "funkcja_c(x, stop) = " << funkcja_c(x, stop) << endl;


	return 0;
}


