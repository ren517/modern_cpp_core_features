#include <iostream>

int main() {
    int x = 12;
    auto foo = [x](int a) -> int { return a + x; };
    std::cout << foo(5) << std::endl;
}
