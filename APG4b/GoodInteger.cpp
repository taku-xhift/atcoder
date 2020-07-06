

#include <iostream>

int main() {
	char a[4];
	std::cin >> a[0] >> a[1] >> a[2] >> a[3];

	if (a[0] == a[1] && a[1] == a[2]) {
		std::cout << "Yes" << std::endl;
	} else if (a[1] == a[2] && a[2] == a[3]) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
}
