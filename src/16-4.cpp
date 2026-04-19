class Base {
public:
	virtual void log(const char *p) const {
	}

	virtual void foo(int x) {
	}
};

class BaseWithFileLog : public Base {
public:
	virtual void log(const char *p) const override final {
	}
};

class Derived : public BaseWithFileLog {
public:
	void foo(int x) {
	};

	// virtual void log(const char *p) override{
	// 	char str[] = "hello world";
	// 	p = str;
	// }
	// 这是一个新的函数，因为根本就找不到，被const保护了
};

int main(int argc, char *argv[]) {
}
