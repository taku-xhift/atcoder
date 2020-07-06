

#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int num = 0;

	for (int i = 1; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			for (int k = 0; k < 10; ++k) {
				int n = 10000*i + i + 1000*j + 10*j + 100*k;
				if (a <= n && n <= b) {
					++num;
				}
			}
		}
	}

	cout << num << endl;
}

