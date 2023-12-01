#include "String.h"
#include <iostream>

String::String(){
  // Initialize with a default string, e.g., "Hello World"
  const char* defaultString = "Hello World";
  len = 0;
  capacity = 100; // Initial capacity, can be adjusted based on requirements
  data = new char[capacity];

  // Copy the default string manually
  while (defaultString[len] != '\0' && len < capacity - 1) {
    data[len] = defaultString[len];
    len++;
  }

  // Add null terminator
  data[len] = '\0';
}

// Copy constructor
String::String(const String& other) {
  len = other.len;
  capacity = other.capacity;
  data = new char[capacity];

  // Copy the data from the other string
  for (int i = 0; i <= len; ++i) {
    data[i] = other.data[i];
  }
}

// Constructor with a C-style string parameter
String::String(const char* str) {
    len = 0;
    capacity = 100; // Initial capacity, can be adjusted based on requirements

    data = new char[capacity];

    while (str[len] != '\0' && len < capacity - 1) {
      data[len] = str[len];
      len++;
    }

    // Add null terminator
    data[len] = '\0';
}

int String::size(){
  return len;
}

void String::clear(){
  delete[] data;
  len = 0;
  data = new char[capacity];
  data[0]='\0';
}
