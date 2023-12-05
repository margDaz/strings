#include "String.h"
#include <iostream>
#include <cstdlib>

void testDefaultConstructor();
void testCopyConstructor();
void testOperator_plus();
void testCapacity();
void testEmpty();
void testReserve();

int main() {
    testCopyConstructor();
    testOperator_plus();
    testCapacity();
    testEmpty();
    testReserve();

    std::exit(EXIT_SUCCESS);
}

//Constructors

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


// Accessors

void testCapacity(){
  String str;
  std::cout << "Capacity is " << str.getCapacity() << std::endl;
}

//Member functions

void testEmpty(){
  String str;
  if (str.isEmpty()){
    std::cout << "The string is empty" << std::endl;
  } else {
    std::cout << "The string is not empty" << std::endl;

  }
}

void testReserve(){
  String str;
  str.reserve(10);
  std::cout << "Size is now " << str.size() << " and capacity is " << str.capacity << std::endl;
}

void testOperator_plus(){
  String str("Bonjour");
  std::cout << str.data << std::endl;
  String str2 = str+"Clement";
  std::cout << str2.size() << std::endl;
  std::cout << str2.data << std::endl;
}

// Operators
/*
void testOperator_eq(){
  String str("Bonjour");
  String str2;
  const char* p = str.data;

  str2.operator_eq(p);

  std::cout  << str.data << std::endl;
}
*/
