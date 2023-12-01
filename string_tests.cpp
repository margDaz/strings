#include "String.h"
#include <iostream>

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
}

void testcapacity();
void testEmpty();
// Add more test functions for other functionalities

int main() {
    testDefaultConstructor();
    testCopyConstructor();
    testcapacity();
    testEmpty();
    // Call other test functions
    return 0;
}

void testcapacity(){
  String str;
  std::cout << str.getCapacity() << std::endl;
}
void testEmpty(){
  String str;
  if (str.isEmpty()){
    std::cout << "The string is empty" << std::endl;
  } else {
    std::cout << "The string is not empty" << std::endl;

  }

}
