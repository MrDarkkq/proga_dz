#include "DynamicArray.h"
#include <iostream>

int main() {
    // task 1
    std::cout << "--- task 1 ---" << std::endl;

    DynamicArray a(5);
    a.print();

    a.set(0, 10);
    a.set(1, -20);
    a.set(2, 100);
    a.set(3, -100);
    a.set(4, 55);
    a.print();

    a.set(7, 3);
    a.set(0, 500);

    std::cout << "get(2): " << a.get(2) << std::endl;
    std::cout << "get(9): " << a.get(9) << std::endl;

    // task 2
    std::cout << "\n--- task 2 ---" << std::endl;

    DynamicArray b = a;
    std::cout << "b: ";
    b.print();

    b.set(0, 77);
    std::cout << "a: ";
    a.print();
    std::cout << "b: ";
    b.print();

    // task 3
    std::cout << "\n--- task 3 ---" << std::endl;

    DynamicArray c(3);
    c.set(0, 5);
    c.set(1, 6);
    c.set(2, 7);
    c.print();

    c.push_back(8);
    c.push_back(-9);
    c.push_back(500);
    c.print();

    // task 4
    std::cout << "\n--- task 4 ---" << std::endl;

    DynamicArray x(5);
    x.set(0, 1);
    x.set(1, 2);
    x.set(2, 3);
    x.set(3, 4);
    x.set(4, 5);
    std::cout << "x: ";
    x.print();

    DynamicArray y(3);
    y.set(0, 10);
    y.set(1, 20);
    y.set(2, 30);
    std::cout << "y: ";
    y.print();

    DynamicArray sum(5);
    for (std::size_t i = 0; i < 5; i++)
        sum.set(i, x.get(i));
    sum.add(y);
    std::cout << "x + y: ";
    sum.print();

    DynamicArray diff(5);
    for (std::size_t i = 0; i < 5; i++)
        diff.set(i, x.get(i));
    diff.subtract(y);
    std::cout << "x - y: ";
    diff.print();

    DynamicArray p(2);
    p.set(0, 1);
    p.set(1, 1);

    DynamicArray q(4);
    q.set(0, 5);
    q.set(1, 5);
    q.set(2, 5);
    q.set(3, 5);

    p.add(q);
    std::cout << "p + q: ";
    p.print();

    return 0;
}