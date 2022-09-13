#include <memory>
#include <iostream>

class B;
class A {

public:

    std::shared_ptr<B> _b;

    ~A() {
        std::cout << "Destruktor A" << std::endl;
    }
};

class B {

public:

    std::weak_ptr<A> _a;

    ~B() {
        std::cout << "Destruktor B" << std::endl;
    }
};

void doSomething() {
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    a->_b = b;
    b->_a = a;
}

int main() {
    doSomething();
    std::cout << "Tutaj A i B powinny być usunięte" << std::endl;

    B obiekt;
    obiekt._a;
}