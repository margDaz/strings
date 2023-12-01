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

String& String::operator=(char c) {
  clear(); // Clear the existing contents
  len = 1;
  data[0] = c;
  data[1] = '\0'; // Null-terminate the string
  return *this;
}
/*
String String::operator+ (const char* rhs) const{
  newlen = len + rhs.size();
  char* newData = new char[capacity];

  while (data[len] != '\0' && len < capacity - 1) {
    newData[len] = data[len];
    len++;
  }

  while (rhs.data[len] != '\0' && len < capacity - 1) {
    newData[len] = rhs.data[len];
    len++;
  }


  return

}*/
