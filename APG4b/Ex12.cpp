

#include <iostream>
using namespace std;

int main() {
	string S;
	cin >> S;

	// ここにプログラムを追記
	string op;
	string num;
	int result = 1;
	auto it = S.begin();
	++it;
	for (; it != S.end(); ++it) {
		if (*it == '+') {
			++result;
		} else {
			--result;
		}
		++it;
	}

	cout << result << endl;
}
