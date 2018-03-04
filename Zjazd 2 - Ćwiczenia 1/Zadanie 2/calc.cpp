//
// Created by Krystian Duma on 26.10.2016.
//

#include<iostream>
#include<cmath>
#include "calc.h"

double rev_pitagoras(double a, double c) {
    return sqrt(pow(c, 2) - pow(a, 2));
}

double pitagoras(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

double pole_trapezu(double a, double b, double h) {
    return (a + b) / 2 * h;
}

double pole_szesciokata(double a) {
    return (3 * pow(a, 2) * sqrt(3)) / 2.0;
}

double pole_trojkata(double a, double h) {
    return 1.0 / 3.0 * a * h;
}

double obj_graniastoslupa(double p, double h) {
    return p * h;
}

double obj_ostroslupa(double p, double h) {
    return pole_trojkata(p, h);
}

void calculate_1(double &p_podst, double &p_calk, double &obj_calk, double a, double b, double h_podst, double h_gran) {
    double c = pitagoras(abs(a - b) / 2, h_podst);

    p_podst = pole_trapezu(a, b, h_podst);
    p_calk = 2 * p_podst + h_gran * a + h_gran * b + 2 * h_gran * c;
    obj_calk = obj_graniastoslupa(p_podst, h_gran);
}

void calculate_2(double &p_podst, double &p_calk, double &obj_calk, double a, double h_gran) {
    p_podst = pole_szesciokata(a);
    p_calk = 2 * p_podst + 6 * a * h_gran;
    obj_calk = obj_graniastoslupa(p_podst, h_gran);
}

void calculate_3(double &p_podst, double &p_calk, double &obj_calk, double a, double b, double h_gran) {
    double h_sciany_a = pitagoras(a / 2, h_gran);
    double p_sciany_a = pole_trojkata(a, h_sciany_a);

    double h_sciany_b = pitagoras(b / 2, h_gran);
    double p_sciany_b = pole_trojkata(b, h_sciany_b);

    p_podst = a * b;
    p_calk = p_podst + 2 * p_sciany_a + 2 * p_sciany_b;
    obj_calk = obj_ostroslupa(p_podst, h_gran);
}

void calculate_4(double &p_podst, double &p_calk, double &obj_calk, double a, double h_gran) {
    double h_sciany = pitagoras(a, h_gran);
    double p_sciany = pole_trojkata(a, h_sciany);

    p_podst = pole_szesciokata(a);
    p_calk = p_podst + 6 * p_sciany;
    obj_calk = obj_ostroslupa(p_podst, h_gran);
}