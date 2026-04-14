//
// Created by ren on 2026/4/13.
//

#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
    std::vector<int> v1 = {1, 2, 3, 4};
    for (const auto &i : v1) {
        std::cout << i;
    }
    std::cout << std::endl;
    for (auto i = v1.begin(); i != v1.end(); i++) {
        std::cout << *i << std::endl;
    }
}
