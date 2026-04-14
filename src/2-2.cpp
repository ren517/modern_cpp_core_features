#include <iostream>

namespace parent {
namespace child1 {
void foo() {
    std::cout << "foo v1.0" << std::endl;
}
} // namespace child1
} // namespace parent
// namespace parent

namespace parent1 {
inline namespace child2 {
void foo() {
    std::cout << "foo v2.0" << std::endl;
}
} // namespace child2
} // namespace parent1

namespace parent3::inline child {
void foo() {
    std::cout << "foo v3.0" << std::endl;
}
} // namespace parent3::inline child
int main(int argc, char *argv[]) {
    parent::child1::foo();
    parent1::foo();
    parent3::child::foo();
    parent3::foo();
}
