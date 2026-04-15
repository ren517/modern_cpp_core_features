#include <deque>
#include <list>
#include <vector>

class X {
    template <class T> X(T first, T last) : l_(first, last) {
    }
    std::list<int> l_;

  public:
    X(std::vector<short> &);
    X(std::deque<int> &);
    X(int arr[], int size);
};

X::X(std::vector<short> &v) : X(v.begin(), v.end()) {
}
X::X(std::deque<int> &v) : X(v.begin(), v.end()) {
}
X::X(int arr[], int size) : X(arr, arr + size) {
}

int get_number(int x) try { return x; } catch (...) {
}

int main() {
    std::vector<short> a{1, 2, 3, 4, 5};
    std::deque<int> b{1, 2, 3, 4, 5};
    int abc[] = {1, 2, 3, 5};

    X x1(a);
    X x2(b);
    X x3(abc, 4);
}
