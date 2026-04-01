#include <stdio.h>

namespace S1 {
void foo() {
    printf("this is S1 foo()\n");
}
} // namespace S1

namespace S2 {
void foo() {
    printf("this is S2 foo()\n");
}
} // namespace S2

using namespace S1;

int main() {
    foo();
    S2::foo();
}
