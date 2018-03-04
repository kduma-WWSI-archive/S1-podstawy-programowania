#include <iostream>
#include<vector>

//#define TEST_DATA

using namespace std;

bool zawiera(pair<int, int> a, pair<int, int> b){
	return (((a.first - 1) <= b.first && b.first <= (a.second + 1))) || ((a.first - 1) <= b.second && b.second <= (a.second + 1));
}

vector<pair<int, int>> lacz ( vector<pair<int, int>> przedzialy ) {
	vector<pair<int, int>> przedzialy_ujednolicone;

	for (auto przedzial : przedzialy) {
		bool found = false;
		for( auto &przedzial_u : przedzialy_ujednolicone){
			if(zawiera(przedzial_u, przedzial)){
				przedzial_u.second = max(przedzial_u.second, przedzial.second);
				przedzial_u.first = min(przedzial_u.first, przedzial.first);
				found = true;
				break;
			}
		}
		if(!found){
			przedzialy_ujednolicone.push_back(przedzial);
		}
	}
	return przedzialy_ujednolicone;
}

int main () {

	#ifndef TEST_DATA
		int liczba_przedzialow;
		cin >> liczba_przedzialow;

		vector<pair<int, int>> przedzialy(liczba_przedzialow);

		for ( int i = 0; i < liczba_przedzialow; ++i ) {
			cin >> przedzialy[i].first >> przedzialy[i].second;
		}
	#else
		vector<pair<int, int>> przedzialy = { {-2, 2}, {6, 6}, {0, 3}, {5, 5} };
//		vector<pair<int, int>> przedzialy = { {1, 2}, {4, 5}, {7, 9}, {5, 12} };
	#endif

	vector<pair<int, int>> przedzialy_ujednolicone = lacz(przedzialy);
	for ( int i = 1; i < przedzialy.size(); ++i ) {
		przedzialy_ujednolicone = lacz(przedzialy_ujednolicone);
	}

	cout << endl << endl << "Wprowadzono następujące przedziały: " << endl;
	for( auto przedzial : przedzialy){
		cout << "[" << przedzial.first << ", " << przedzial.second << "], ";
	}

	cout << endl << endl << "Po złączeniu powstały następujące przedziały: " << endl;
	for( auto przedzial : przedzialy_ujednolicone){
		cout << "[" << przedzial.first << ", " << przedzial.second << "], ";
	}

	cout << endl << endl << "Złączonych przedziałów jest: " << przedzialy_ujednolicone.size() << endl;

	return 0;
}