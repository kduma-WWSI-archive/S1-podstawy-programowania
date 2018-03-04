//
// Created by Krystian Duma on 26.10.2016.
//

#include <iostream>
#include <cmath>
#include "test.h"
#include "calc.h"

using namespace std;

double round(double val) {
    return floor(val * 1000.0) / 1000.0;
}

void run_test() {
    double p_podst = -1, p_calk = -1, obj_calk = -1;

    asert("pitagoras(3, 4) ------------------ ==   5.000000", pitagoras(3, 4), 5);
    asert("rev_pitagoras(4, 5) -------------- ==   3.000000", rev_pitagoras(4, 5), 3);
    asert("rev_pitagoras(3, 5) -------------- ==   4.000000", rev_pitagoras(3, 5), 4);

    asert("pole_trapezu(6, 12, 4) ----------- ==  36.000000", pole_trapezu(6, 12, 4), 36);
    asert("pole_szesciokata(2) -------------- ==  10.392...", round(pole_szesciokata(2)), 10.392);
    asert("pole_trojkata(2, 9) -------------- ==   6.000000", round(pole_trojkata(2, 9)), 6);
    asert("obj_graniastoslupa(2, 9) --------- ==  18.000000", round(obj_graniastoslupa(2, 9)), 18);
    asert("obj_ostroslupa(2, 9) ------------- ==   6.000000", round(obj_ostroslupa(2, 9)), 6);


    calculate_1(p_podst, p_calk, obj_calk, 6, 12, 4, 10);
    asert("calculate_1(6, 12, 4, 10):p_podst  ==  36.000000", p_podst, 36);
    asert("calculate_1(6, 12, 4, 10):p_calk   == 352.000000", p_calk, 352);
    asert("calculate_1(6, 12, 4, 10):obj_calk == 360.000000", obj_calk, 360);


    calculate_2(p_podst, p_calk, obj_calk, 2, 10);
    asert("calculate_2(2, 10):p_podst  ------ ==  10.392...", round(p_podst), 10.392);
    asert("calculate_2(2, 10):p_calk   ------ == 140.784...", round(p_calk), 140.784);
    asert("calculate_2(2, 10):obj_calk ------ == 103.923...", round(obj_calk), 103.923);


    calculate_3(p_podst, p_calk, obj_calk, 2, 3, 9);
    asert("calculate_3(2, 3, 9):p_podst  ---- ==   6.000000", p_podst, 6);
    asert("calculate_3(2, 3, 9):p_calk   ---- ==  36.322...", round(p_calk), 36.322);
    asert("calculate_3(2, 3, 9):obj_calk ---- ==  18.000000", obj_calk, 18);

    calculate_4(p_podst, p_calk, obj_calk, 2, 9);
    asert("calculate_4(2, 9):p_podst  ------- ==  10.392...", round(p_podst), 10.392);
    asert("calculate_4(2, 9):p_calk   ------- ==  47.270...", round(p_calk), 47.27);
    asert("calculate_4(2, 9):obj_calk ------- ==  31.176...", round(obj_calk), 31.176);
}

void asert(string test, double var_1, double var_2) {
    cout << test << ": ";
    if (var_1 == var_2) {
        cout << "OK";
    } else {
        cout << "FAIL";
    }
    cout << endl;
}
