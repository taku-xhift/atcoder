﻿#include <iostream>
#include <string>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1
  int price;
  if (p == 1) {
    cin >> price;
  }

  // パターン2
  string text;
  if (p == 2) {
    cin >> text >> price;
  }

  int N;
  cin >> N;

	if (p == 2) {
		cout << text << "!" << endl;
	}
  cout << price * N << endl;
}
