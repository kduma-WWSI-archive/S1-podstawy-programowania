#include <iostream>

using namespace std;

int main() {
    double w, x = 10.0;
    int y = 10;


    /*
     * Oczekiwany wynik: 7.5
     * Zwracany wynik:   0
     * Dlaczego:         3/4 = 0
     * Poprawiony kod:  w=3.0/4.0*x;
     *
     * Ewentualnie jeśli 4*x miało być w dzielniku to należy dodać nawiasy
     * Na przykład tak:  3.0/(4.0*x);
     */
    w = 3 / 4 * x;
    cout << "w = 3/4*x = " << w << endl;

    /*
     * Oczekiwany wynik: 7.5
     * Zwracany wynik:   7.5
     */
    w = 3 * x / 4;
    cout << "w = 3*x/4 = " << w << endl;

    /*
     * Oczekiwany wynik: 15
     * Zwracany wynik:   15
     *
     * Ewentualnie jeśli 2*x miało być w dzielniku to należy dodać nawiasy
     * Na przykład tak:  3.0/(2*x);
     */
    w = 3.0 / 2 * x;
    cout << "w = 3.0/2*x = " << w << endl;

    /*
     * Oczekiwany wynik: 3
     * Zwracany wynik:   0
     * Dlaczego:         3/y = 0
     * Poprawiony kod:   3.0/y*x;
     *
     * Ewentualnie jeśli y*x miało być w dzielniku to należy dodać nawiasy
     * Na przykład tak:  3.0/(y*x);
     */
    w = 3 / y * x;
    cout << "w = 3/y*x = " << w << endl;

    /*
     * Oczekiwany wynik: 3
     * Zwracany wynik:   3
     */
    w = 3 * y / x;
    cout << "w = 3*y/x = " << w << endl;

    /*
     * Oczekiwany wynik: 3
     * Zwracany wynik:   3
     *
     * Ewentualnie jeśli float(y)*x miało być w dzielniku to należy dodać nawiasy
     * Na przykład tak:  3/(float(y)*x);
     */
    w = 3 / float(y) * x;
    cout << "w = 3/float(y)*x = " << w << endl;
}