#include <iostream>
#include <vector>
#include <string>

//#define TEST_DATA

using namespace std;

pair<int, string> szukaj ( const string &slowo_1, const string &slowo_2 ) {
	for ( int i = (int) slowo_1.size(); i >= 1; i--){
		for ( int j = 0; j <= slowo_1.size() - i; j++){
			if(slowo_2.find(slowo_1.substr(j, i)) != string::npos){
				return pair<int, string> {i, slowo_1.substr(j, i)};
			}
		}
	}
	return pair<int, string> {0, ""};
}

int main () {
	#ifndef TEST_DATA
		string slowo_1, slowo_2;
		cin >> slowo_1 >> slowo_2;
	#else
		string slowo_1 = "abaab", slowo_2 = "bbbaaa";
	#endif

	pair<int, string> dlugosc_wspolnego_slowa = szukaj(slowo_1, slowo_2);

	if(dlugosc_wspolnego_slowa.first == 0)
		cout << "Podane dwa słowa nie mają wspólnej części!";
	else
		cout << "Najdłuższe wspólne podsłowo słów '"
		     << slowo_1 << "' i '" << slowo_2
		     << "' ma długość "
		     << dlugosc_wspolnego_slowa.first << " znaków i jest to '"
		     << dlugosc_wspolnego_slowa.second << "'.";

	return 0;
}