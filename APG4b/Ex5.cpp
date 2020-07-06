
#include <iostream>
#include <vector>

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::vector<int> vec;
	vec.push_back(a);
	vec.push_back(b);
	std::cout << a + b << std::endl;
}

