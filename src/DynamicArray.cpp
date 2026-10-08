#include "DynamicArray.h"

#include <iostream>

DynamicArray::DynamicArray(std::size_t size) {
    count = size;
    data = new int[count];
    for (std::size_t i = 0; i < count; i++)
        data[i] = 0;
}

DynamicArray::DynamicArray(const DynamicArray& other) {
    count = other.count;
    data = new int[count];
    for (std::size_t i = 0; i < count; i++)
        data[i] = other.data[i];
}

DynamicArray::~DynamicArray() {
    delete[] data;
}

void DynamicArray::print() const {
    std::cout << "[ ";
    for (std::size_t i = 0; i < count; i++) {
        std::cout << data[i];
        if (i != count - 1)
            std::cout << ", ";
    }
    std::cout << " ]" << std::endl;
}

bool DynamicArray::checkValue(int value) const {
    if (value < -100 || value > 100)
        return false;
    return true;
}

void DynamicArray::set(std::size_t index, int value) {
    if (index >= count) {
        std::cout << "set: index " << index << " is out of bounds" << std::endl;
        return;
    }
    if (!checkValue(value)) {
        std::cout << "set: value " << value << " is out of range" << std::endl;
        return;
    }
    data[index] = value;
}

int DynamicArray::get(std::size_t index) const {
    if (index >= count) {
        std::cout << "get: index " << index << " is out of bounds" << std::endl;
        return 0;
    }
    return data[index];
}

void DynamicArray::push_back(int value) {
    if (!checkValue(value)) {
        std::cout << "push_back: value " << value << " is out of range" << std::endl;
        return;
    }

    int* tmp = new int[count + 1];
    for (std::size_t i = 0; i < count; i++)
        tmp[i] = data[i];
    tmp[count] = value;

    delete[] data;
    data = tmp;
    count++;
}

void DynamicArray::add(const DynamicArray& other) {
    for (std::size_t i = 0; i < count; i++) {
        if (i < other.count)
            data[i] += other.data[i];
    }
}

void DynamicArray::subtract(const DynamicArray& other) {
    for (std::size_t i = 0; i < count; i++) {
        if (i < other.count)
            data[i] -= other.data[i];
    }
}

std::size_t DynamicArray::size() const {
    return count;
}