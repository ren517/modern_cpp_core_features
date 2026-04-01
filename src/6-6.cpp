#include <iostream>
#include <ostream>
#include <stdio.h>
#include <vector>
template <class T> void foo(std::vector<T> &&t) {
}
class BigMemoryPool {
  public:
    static const int PoolSize = 4096;
    BigMemoryPool() : pool_(new char[PoolSize]) {
    }
    ~BigMemoryPool() {
        if (pool_ != nullptr) {
            delete[] pool_;
        }
    }

    BigMemoryPool(BigMemoryPool &&other) {
        std::cout << "move big memory pool." << std::endl;
        pool_ = other.pool_;
        other.pool_ = nullptr;
    }

    BigMemoryPool(const BigMemoryPool &other) : pool_(new char[PoolSize]) {
        std::cout << "copy big memory pool." << std::endl;
        memcpy(pool_, other.pool_, PoolSize);
    }

  private:
    char *pool_;
};

BigMemoryPool make_pool() {
    return BigMemoryPool();
}

void move_pool(BigMemoryPool &&pool) {
    std::cout << "call move_pool" << std::endl;
    BigMemoryPool my_pool(pool);
}

int main() {
    std::vector<int> v{1, 2, 3};
    move_pool(make_pool());
    // foo(v); // 编译错误
}
