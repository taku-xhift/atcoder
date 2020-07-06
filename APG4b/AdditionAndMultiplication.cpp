
#include <iostream>

using namespace std;

long min(long n, long k, long now) {
	if (n == 0) {
		return now;
	}

	long d = now * 2;
	long add = now + k;

	long ret = 0;

	if (d > add) {
		ret = min(n-1, k, add);
	} else {
		ret = min(n-1, k, d);
	}

	return ret;
}

int main() {
	long n, k;
	cin >> n >> k;

	long result = min(n, k, 1l);
	cout << result << endl;
}
