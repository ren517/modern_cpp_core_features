#include <iostream>

class IntWrap {
  public:
    IntWrap(int n) : n_(n) {
    }
    IntWrap operator+(const IntWrap &other) {
        return IntWrap(n_ + other.n_);
    }

    int getValue() const {
        return n_;
    }

  private:
    int n_;
};

auto sum2(auto t1, auto t2) {
    return t1 + t2;
}

int main() {
    auto a = IntWrap(1);
    auto b = IntWrap(2);
    auto c = sum2(a, b);
    std::cout << sum2(a, b).getValue() << std::endl;
    std::cout << c.getValue() << std::endl;
}
