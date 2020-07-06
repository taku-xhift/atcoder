

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	vector<int> ranges(n);
	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	int l, r;
	for (int i = 0; i < n; ++i) {
		l = vec[i];
		r = k - vec[i];
		if (l > r) {
			ranges[i] = 2 * r;
		} else {
			ranges[i] = 2 * l;
		}
	}

	int ret = 0;
	for (auto&& elm : ranges) {
		ret += elm;
	}

	cout << ret << endl;
}

