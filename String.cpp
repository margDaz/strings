#include "String.h"
#include <iostream>

String::String(){
  // Initialize with a default string, e.g., "Hello World"
  const char* defaultString = "Hello World";
  size = 0;
  capacity = 100; // Initial capacity, can be adjusted based on requirements
  data = new char[capacity];

  // Copy the default string manually
  while (defaultString[size] != '\0' && size < capacity - 1) {
    data[size] = defaultString[size];
    size++;
  }

  // Add null terminator
  data[size] = '\0';
}

String(const String& str){
  
}
