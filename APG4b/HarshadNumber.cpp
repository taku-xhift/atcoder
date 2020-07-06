

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	int num = n;
	int dev = 0;
	for (int i = 0; i < 8; ++i) {
		dev += num % 10;
		num /= 10;
	}

	if ((n % dev) == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}

