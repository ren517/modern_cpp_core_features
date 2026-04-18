#include <iostream>

enum class Color {
    Red,
    Green,
    Blue
};
int main() {
    Color c{5}; // 编译成功
                // Color c1 = 5;		// 编译失败
                // Color c2 = { 5 };	// 编译失败
                // Color c3(5);		// 编译失败
    Color c1 = Color::Blue;
    using enum Color;

    switch (c1) {
    case Red:
        break;
    case Green:
        break;
    case Blue:
        std::cout << "Blue" << std::endl;
        break;
    default:
        std::cout << static_cast<int>(c) << std::endl;
    }
}
