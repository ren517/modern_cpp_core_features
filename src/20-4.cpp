#include <iostream>
#include <vector>
#include <string>

struct R {
    int a = 10;
    std::string b = "Helloworld";
};

int main(int argc, char *argv[]) {
    std::vector<R> my_r{{10, "aaa"}, {11, "bbb"}, {12, "ccc"}};
    for (auto &[a, b]: my_r) {
        a += 100;
        b += "ddd";
    }

    for (const auto &[a, b]: my_r) {
        std::cout << std::format("a = {}\nb = {}\n", a, b);
    }
}
