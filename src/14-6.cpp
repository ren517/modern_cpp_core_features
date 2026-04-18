#include <iostream>

enum class E : unsigned int {
    e1 = 1,
    e2 = 2,
    e3 = 0xfffffff0
};

int main() {
    bool b = E::e1 < E::e3;
    std::cout << std::boolalpha << b << std::endl;
}
