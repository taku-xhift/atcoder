


#include <iostream>


int main() {
	int a, b;
	std::cin >> a >> b;
	int rad = a % 500;
	bool can = rad <= b;
	const char* ret = can ? "Yes" : "No";
	std::cout << ret << std::endl;
}

