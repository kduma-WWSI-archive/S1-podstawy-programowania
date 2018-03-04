//
// Created by Krystian Duma on 16.10.2016.
//

#include<iostream>
#include "f_io.h"

using namespace std;

double pobierz(std::string var) {
    double return_value;
    cout << "podaj wartosc zmiennej " << var << " = ";
    cin >> return_value;

    return return_value;
}

void wypisz_wynik(double p_podst, double p_calk, double obj_calk) {
    cout << endl;
    cout << "Pole podstawy  = " << p_podst << endl;
    cout << "Pole calkowite = " << p_calk << endl;
    cout << "Objetosc gran. = " << obj_calk << endl;
}

int menu() {
    int opcja;

    cout << "Co chcesz obliczyc?" << endl;
    cout << "1. obj_graniastoslupa prostego o podstawie trapezu rownoramiennego," << endl;
    cout << "2. obj_graniastoslupa foremnego o podstawie szesciokata foremnego," << endl;
    cout << "3. ostroslupa o podstawie prostokata," << endl;
    cout << "4. ostroslupa o podstawie szesciokata foremnego." << endl << endl;
    cout << "0. Zakończ program." << endl;
    cout << "5. Uruchom test." << endl;

    cout << endl;

    cout << "Wybieram:";
    cin >> opcja;

    if (opcja < 0 || opcja > 5) {
        cout << endl;
        cout << "+-------------------------+" << endl;
        cout << "| ! Nie ma takiej opcji ! |" << endl;
        cout << "+-------------------------+" << endl;
        cout << endl;
        return menu();
    }

    io_cls();

    return opcja;
}

void io_cls() {
#ifdef __APPLE__
    system("clear");
#elif __linux__
    system("clear");
#elif _WIN32
    system("cls");
#endif
}

void io_pause() {
#ifdef __APPLE__
    cout << "Paused, press ENTER to continue." << endl;
    cin.ignore(2);
#elif __linux__
    cout << "Paused, press ENTER to continue." << endl;
    cin.ignore(2);
#elif _WIN32
    system("pause");
#endif
}