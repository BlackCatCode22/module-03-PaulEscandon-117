#include <iostream>

int main() {
    // Pointer basics
    int a = 10;
    int *p = &a;

    std::cout << "Address stored in p: " << p << std::endl;
    std::cout << "Value of a using p: " << *p << std::endl;

    *p = 20;
    std::cout << "New value of a: " << a << std::endl;

    // Pointer arithmetic
    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << "\nAddresses of elements in the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Address of arr[" << i << "]: " << &arr[i] << std::endl;
    }

    std::cout << "\nValues of elements in the array:" << std::endl;
    int *ptr = arr;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Value of arr[" << i << "]: " << *ptr << std::endl;
        ptr++;
    }

    return 0;
}
