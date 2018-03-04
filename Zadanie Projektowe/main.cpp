#include "src/wejscie.h"
#include "src/wyjscie.h"
#include "src/obliczenia.h"

using namespace std;

int main () {
	vector<double> a = wykonaj_obliczenia(pobierz_dane());
	pair<double, int> dominanta = licz_dominante(a);

	drukuj_wynik(a, dominanta);
}