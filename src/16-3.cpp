class Base {
public:
	virtual void foo(int x) const{
	}
};

class Derived : public Base {
public:
	void foo(int x) const override final {
	};
};

class Derived2 : public Derived {
public:
	void foo(int x) {
	};
};
