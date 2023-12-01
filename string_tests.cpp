#include "String.h"
#include <iostream>
#include <cstdlib>

void testDefaultConstructor();
void testCopyConstructor();
void testClear();
void testOperator();
void testcapacity();
void testEmpty();
// Add more test functions for other functionalities

int main() {
    testDefaultConstructor();
    testCopyConstructor();
    testClear();
    testOperator();
    // Call other test functions
    std::exit(EXIT_SUCCESS);
}

void testDefaultConstructor() {
    String str;
    // Add assertions to check if the default constructor initializes correctly
    // For example, assert that str.size is the length of "Hello World"
    std::cout << str.size() << std::endl;
    std::cout << str.data << std::endl;
}

void testCopyConstructor() {
    String str("Bonjour je suis Clément");
    // Add assertions to check if the default constructor initializes correctly
    // For example, assert that str.size is the length of "Hello World"
    std::cout << str.size() << std::endl;
    std::cout << str.data << std::endl;

    String str2(str);
    std::cout << str2.size() << std::endl;
    std::cout << str2.data << std::endl;
}

void testClear(){
  String str("Bonjour");
  std::cout << str.data << std::endl;
  str.clear();
  std::cout << str.size() << std::endl;
  std::cout << str.data << std::endl;
}

void testOperator(){
  String str("Bonjour");
  std::cout << str.data << std::endl;
  str='c';
  std::cout << str.size() << std::endl;
  std::cout << str.data << std::endl;
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
