#pragma once

#include <cstddef>

class DynamicArray {
public:
    DynamicArray(std::size_t size);
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();

    void print() const;

    void set(std::size_t index, int value);
    int get(std::size_t index) const;

    void push_back(int value);

    void add(const DynamicArray& other);
    void subtract(const DynamicArray& other);

    std::size_t size() const;

private:
    int* data;
    std::size_t count;

    bool checkValue(int value) const;
};