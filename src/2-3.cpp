#include <iostream>

namespace Parent {
void foo() {
    std::cout << "foo v1.0" << std::endl;
}
} // namespace Parent

int main() {
    Parent::foo();
}
