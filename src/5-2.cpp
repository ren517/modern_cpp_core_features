#include <iostream>
#include <string>

template <class T1, class T2> auto sum1(T1 t1, T2 t2) -> decltype(t1 + t2) {
    return t1 + t2;
}

auto sum2(auto t1, auto t2) {
    return t1 + t2;
}

template <typename T1, typename T2> auto sum3(T1 t1, T2 t2) {
    return t1 + t2;
}

int main() {
    auto x1 = sum1(4, 2);

    auto x2 = sum2(4, 2);
    auto x3 = sum2(4.0, 2.0);
    auto x4 = sum2('aaa', 'bbb');
    std::string x5 = "hello";
    std::string x6 = "world";
    auto x7 = sum2(x5, x6);
    std::cout << x7 << std::endl;
}
