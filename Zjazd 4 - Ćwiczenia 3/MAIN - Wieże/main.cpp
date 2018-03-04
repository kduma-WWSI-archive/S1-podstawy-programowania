#include <iostream>

using namespace std;

int main () {
	int k;
	cin >> k;

	for (int i = 1; i <= k; i++){
		int h, n, a, wiezy = 0;
		cin >> h >> n;

		for (int j = 1; j <= n; j++){
			cin >> a;
			if (a == h)
				wiezy++;
		}
		cout << wiezy << endl;
	}

	return 0;
}