#include <iostream>

using namespace std;

int main () {
	unsigned int a[3];
	unsigned int b[3];

	cout << endl << "Predkosci a: ";
	cin >> a[0] >> a[1] >> a[2];
	unsigned int sum_a = a[0] + a[1] + a[2];

	cout << endl << "Predkosci b: ";
	cin >> b[0] >> b[1] >> b[2];
	unsigned int sum_b = b[0] + b[1] + b[2];

	if (sum_a < sum_b)
		cout << "B";
	else if (sum_a > sum_b)
		cout << "A";
	else
		cout << "A = B";
	
	return 0;
}