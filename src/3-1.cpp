#include <iostream>

template <auto N> // C++17
void f() {
    std::cout << N << std::endl;
}

int main() {
    // 按值初始化忽略const和volatile限定符
    // const int i = 5;
    // auto j = i;  // j是int类型
    // auto &m = i; // m是const int&类型
    // auto *k = &i; // k是const int*类型

    // int i = 5;
    // int &j = i;
    // auto m = j; // m是int类型

    auto x1 = {1, 2};
    // auto x2 = {1, 2.0}; // 编译失败
    // auto x3{1, 2}; // 编译失败，auto不能推断为std::initializer_list<int>
    auto x4 = {3};
    auto x5{5}; // x是int类型
    // f<5>();   // N为int类型
    // f<'c'>(); // N为char类型
    // f<5.0>();  // 编译失败，模板参数不能为double
}
