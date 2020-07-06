

#include <iostream>
#include <vector>

int main() {
	std::vector<char> vec(3);
	std::cin >> vec[0] >> vec[1] >> vec[2];

	int num = 0;
	for (auto&& elm : vec) {
		if (elm == '1') {
			++num;
		}
	}

	std::cout << num << std::endl;
}

