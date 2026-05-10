#include <iostream>
#include <string>

struct R {
    int a = 10;
    std::string b = "HelloWorld";
};

int main(int argc, char *argv[]) {
    R r;
    auto [x, y] = r;
    std::cout << std::format("x = {}\ny = {}", x, y);
}
