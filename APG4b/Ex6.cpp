﻿

#include <iostream>

using namespace std;

int main() {
	int a, b;
	char op;
	cin >> a >> op >> b;

	if (op == '+') {
		cout << a + b << endl;
	} else if (op == '-') {
		cout << a - b << endl;
	} else if (op == '*') {
		cout << a * b << endl;
	} else if (op == '/') {
		if (b == 0) {
			cout << "error" << endl;
		} else {
			cout << int(a / b) << endl;
		}
	} else {
		cout << "error" << endl;
	}
}

