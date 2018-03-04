#include <iostream>
#include <cmath>

//#define TEST_DATA

using namespace std;

typedef double(* funkcja_do_calkowania)(double, double, double);

double funkcja_do_calkowania_a (double x, double a, double b) {
	return x*x;
}

double funkcja_do_calkowania_b (double x, double a, double b) {
	return a*x*x+b;
}

double funkcja_do_calkowania_c (double x, double a, double b) {
	return log(x);
}

double calkuj ( double d, double g, int czesci, funkcja_do_calkowania fn, double a, double b) {
	double h = ( g - d) / czesci;
	double calka= 0;
	for ( int i = 0; i < czesci; ++i ) {
		calka += ((fn(d+h+i*h, a, b)+fn(d+i*h, a, b))/2)*h;
	}
	return calka;
}

double calkuj ( double d, double g, int czesci, funkcja_do_calkowania fn) {
	return calkuj(d, g, czesci, fn, 0, 0);
}

int main () {

	cout.precision(10);

	#ifndef TEST_DATA
		double d, g, a, b;
		int czesci;

		cout << "                                    d = ";
		cin >> d;
		cout << "                                    g = ";
		cin >> g;
		cout << "                               czesci = ";
		cin >> czesci;
		cout << "                                    a = ";
		cin >> a;
		cout << "                                    b = ";
		cin >> b;
	#else
		double d = -5, g = 10;
		double a = 5, b = 10;
		int czesci = 50;

		cout << "                                    d = " << d << endl;
		cout << "                                    g = " << g << endl;
		cout << "                               czesci = " << czesci << endl;
		cout << "                                    a = " << a << endl;
		cout << "                                    b = " << b << endl;
	#endif

	cout << endl;

	cout << "       calka(funkcja_do_calkowania_a) = " << calkuj(d, g, czesci, funkcja_do_calkowania_a) << endl;
	cout << " calka(funkcja_do_calkowania_b, a, b) = " << calkuj(d, g, czesci, funkcja_do_calkowania_b, a, b) << endl;

	if(d >= 1)
		cout << "       calka(funkcja_do_calkowania_c) = " << calkuj(d, g, czesci, funkcja_do_calkowania_c) << endl;

	return 0;
}