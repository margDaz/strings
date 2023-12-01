#include "String.h"
#include <iostream>

void testDefaultConstructor();

void testCopyConstructor();
// Add more test functions for other functionalities

int main() {
    testDefaultConstructor();
    testCopyConstructor();
    // Call other test functions
    return 0;
}

void testDefaultConstructor() {
    String str;
    // Add assertions to check if the default constructor initializes correctly
    // For example, assert that str.size is the length of "Hello World"
    std::cout << str.size << std::endl;
    std::cout << str.data << std::endl;
}

void testCopyConstructor() {
    String str("Bonjour je suis Clément");
    // Add assertions to check if the default constructor initializes correctly
    // For example, assert that str.size is the length of "Hello World"
    std::cout << str.size << std::endl;
    std::cout << str.data << std::endl;

    String str2(str);
    std::cout << str2.size << std::endl;
    std::cout << str2.data << std::endl;
}
