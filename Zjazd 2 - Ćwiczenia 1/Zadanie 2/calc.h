//
// Created by Krystian Duma on 26.10.2016.
//

#ifndef PP2_CALC_H
#define PP2_CALC_H

void calculate_1(
        double &p_podst,
        double &p_calk,
        double &obj_calk,
        double a,
        double b,
        double h_podst,
        double h_gran
);

void calculate_2(
        double &p_podst,
        double &p_calk,
        double &obj_calk,
        double a,
        double h_gran
);

void calculate_3(
        double &p_podst,
        double &p_calk,
        double &obj_calk,
        double a,
        double b,
        double h_gran
);

void calculate_4(
        double &p_podst,
        double &p_calk,
        double &obj_calk,
        double a,
        double h_gran
);


double pitagoras(double a, double b);

double rev_pitagoras(double a, double c);

double pole_trapezu(double a, double b, double h);

double pole_szesciokata(double a);

double pole_trojkata(double a, double h);

double obj_ostroslupa(double p, double h);

double obj_graniastoslupa(double p, double h);

#endif //PP2_CALC_H
