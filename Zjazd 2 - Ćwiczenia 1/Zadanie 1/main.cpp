#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double a, b, w;
    cout << "podaj a = ";
    cin >> a;
    cout << "podaj b = ";
    cin >> b;

    // 1.
    w = (
            pow(pow(a, 2) - pow(b, 2), 4)
            *
            pow(pow(a, 3) + pow(b, 3), 6)
    );
    cout << "1. w = " << w << endl;

    // 2.
    w = (
            sqrt(
                    pow(
                            pow(a, 2)
                            +
                            pow(b, 2)
                            , 3)
            )
    );
    cout << "2. w = " << w << endl;

    // 3.
    w = (
            1.0 / 231.0
            *
            (
                    pow(a, 2)
                    +
                    a*b
                    +
                    pow(b, 2)
            )
    );
    cout << "3. w = " << w << endl;

    // 4.
    w = (
            7.0 / 8.0
            *
            ( // {
                    a
                    +
                    b * ( // [
                            1
                            +
                            a * (a + b)
                    ) // ]
                    +
                    a * b
            ) // }
    );
    cout << "4. w = " << w << endl;

    // 5.
    w = (
            (
                    (1 - pow(a, 2)) / (1 + pow(a, 2))
            ) * (
                    sqrt(4 + pow(b, 2))
            )
    );

    cout << "5. w = " << w << endl;

    // 6.
    w = (
            (
                    (4 + pow(b, 2)) / (4 - pow(b, 2))
            ) * (
                    (1 + pow(a, 2)) / (1 - pow(a, 2))
            )
    );

    cout << "6. w = " << w << endl;


    system("pause");

    return 0;
}