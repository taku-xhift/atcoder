

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector<char> list;
	char color;
	for (int i = 0; i < num; ++i) {
		cin >> color;
		bool isExist = false;
		for (auto&& elm : list) {
			if (elm == color) {
				isExist = true;
				break;
			}
		}
		if (!isExist) {
			list.push_back(color);
		}

		if (list.size() == 4) {
			break;
		}
	}

	if (list.size() == 3) {
		cout << "Three" << endl;
	} else {
		cout << "Four" << endl;
	}
}

