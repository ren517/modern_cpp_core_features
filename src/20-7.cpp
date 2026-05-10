#include <iostream>

class BindTest {
public:
	int a = 42; // 私有成员变量
	double b = 11.7;
};

int main() {
	BindTest bt;
	auto [x, y] = bt;
	std::cout << "x=" << x << " y=" << y << std::endl;
}
