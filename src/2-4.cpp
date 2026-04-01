#include <iostream>

namespace Parent {
namespace V1 {
void foo() {
    std::cout << "foo v1.0" << std::endl;
}
} // namespace V1

inline namespace V2 {
void foo() {
    std::cout << "foo v2.0" << std::endl;
}
} // namespace V2
} // namespace Parent

int main() {
    Parent::foo();
}
