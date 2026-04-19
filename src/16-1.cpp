class Base {
public:
	virtual void some_func() {
	}

	virtual void foo(int x) {
	}

	virtual void bar() const {
	}

	virtual void baz() {
	}
};

class Derived : public Base {
public:
	virtual void some_func() {
	}

	virtual void foo(int x) override {
	}

	virtual void bar() const override {
	}

	virtual void baz() override {
	}
};
