#include <iostream>
#include <string>
#include <map>

std::map<int, std::string> index_map{{1, "hello"}, {2, "world"}, {3, "!"}};
int int_array[] = {0, 1, 2, 3, 4, 5};

int main() {
	for (const auto &[first, second]: index_map) {
		std::cout << "key=" << first << ", value=" << second << std::endl;
	}

	for (const auto &e: int_array) {
		std::cout << e << std::endl;
	}
}
