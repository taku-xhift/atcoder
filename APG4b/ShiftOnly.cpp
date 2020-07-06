

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> list(n);
	for (int i = 0; i < n; ++i) {
		cin >> list[i];
	}

	int num = 0;
	auto isAllEven = [&]() {
		for (auto&& elm : list) {
			if (elm % 2) {
				return false;
			}
		}
		return true;
	};
	while (isAllEven()) {
		for (auto&& elm : list) {
			elm /= 2;
		}
		++num;
	}

	cout << num << endl;
}

