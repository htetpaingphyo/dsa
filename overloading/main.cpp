#include <iostream>

class Foo
{
private:
    int num;

public:
    Foo(int num) : num(num) {} // initializer : equal to constructor assign to private variable
    friend int operator+(Foo &f1, Foo &f2);
};

int operator+(Foo &f1, Foo &f2)
{
    return f1.num + f2.num;
}

int main()
{
    int num;

    std::cout << "enter num for foo1: ";
    std::cin >> num;
    Foo foo1 = Foo(num);

    std::cout << "enter num for foo2: ";
    std::cin >> num;
    Foo foo2 = Foo(num);

    std::cout << "result of foo1::class + foo2::class => " << foo1 + foo2 << std::endl;

    return 0;
}
