#include<iostream>
#include "f_io.h"
#include "test.h"
#include "calc.h"

using namespace std;


void licz_1(double &p_podst, double &p_calk, double &obj_calk) {
    double a = pobierz("a podstawy");
    double b = pobierz("b podstawy");
    double h_podst = pobierz("h podstawy");
    double h_gran = pobierz("h obj_graniastoslupa");

    calculate_1(p_podst, p_calk, obj_calk, a, b, h_podst, h_gran);
}

void licz_2(double &p_podst, double &p_calk, double &obj_calk) {
    double a = pobierz("a podstawy");
    double h_gran = pobierz("h obj_graniastoslupa");

    calculate_2(p_podst, p_calk, obj_calk, a, h_gran);
}

void licz_3(double &p_podst, double &p_calk, double &obj_calk) {
    double a = pobierz("a podstawy");
    double b = pobierz("b podstawy");
    double h_gran = pobierz("h ostroslupa");

    calculate_3(p_podst, p_calk, obj_calk, a, b, h_gran);
}

void licz_4(double &p_podst, double &p_calk, double &obj_calk) {
    double a = pobierz("a podstawy");
    double h_gran = pobierz("h ostroslupa");

    calculate_4(p_podst, p_calk, obj_calk, a, h_gran);
}

int main() {
    double p_podst, p_calk, obj_calk;

    io_cls();

    switch (menu()) {
        case 0:
            io_cls();
            return 0;

        default:
        case 1:
            licz_1(p_podst, p_calk, obj_calk);
            break;

        case 2:
            licz_2(p_podst, p_calk, obj_calk);
            break;

        case 3:
            licz_3(p_podst, p_calk, obj_calk);
            break;

        case 4:
            licz_4(p_podst, p_calk, obj_calk);
            break;

        case 5:
            run_test();
            return 0;
    }

    wypisz_wynik(p_podst, p_calk, obj_calk);

    io_pause();

    return main();
}

