#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double x, y, w;
    cout << "podaj x = ";
    cin >> x;
    cout << "podaj y = ";
    cin >> y;

    // 1.
    w = 1.0 / 3.0 * abs(x);
    cout << "1. w = " << w << endl;

    // 2.
    w = sqrt(abs(x) + abs(y));
    cout << "2. w = " << w << endl;

    // 3.
    w = 1.0 / 10.0 * pow(y, 3);
    cout << "3. w = " << w << endl;

    // 4.
    if ((x + y) >= 0) {
        w = pow(x + y, 1.0 / 3.0);
        cout << "4. w = " << w << endl;
    } else {
        cout << "4. w = - nie mozna obliczyc tej wartosci (pierwiastek z liczby mniejszej od 0!)" << endl;
    }

    // 5.
    if ((x + y) != 0) {
        w = (
                    sqrt(
                            pow(x + y, 2) + pow(x, 2)
                    )
            ) / (
                    2 * (x + y)
            );

        cout << "5. w = " << w << endl;
    } else {
        cout << "5. w = - nie mozna obliczyc tej wartosci (nie dziel przez ZERO!)" << endl;
    }



    system("pause");

    return 0;
}