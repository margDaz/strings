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

// Copy constructor
String::String(const String& other) {
  size = other.size;
  capacity = other.capacity;
  data = new char[capacity];

  // Copy the data from the other string
  for (int i = 0; i <= size; ++i) {
    data[i] = other.data[i];
  }
}

// Constructor with a C-style string parameter
String::String(const char* str) {
    size = 0;
    capacity = 10; // Initial capacity, can be adjusted based on requirements
    while (str[size] != '\0') {
        size++;
    }

    data = new char[capacity];

    // Copy the provided string
    for (int i = 0; i < size; ++i) {
        data[i] = str[i];
    }

    // Add null terminator
    data[size] = '\0';
}

int String::max_size() const{
  return maxSize;
}

void String::resize(int newSize,char c){
  size = newSize;
  if (newSize<=size){
    //remove in the memory the values above the size n in the list
  }else{
    int i = size;
    for(i=size;i<newSize;++i){
      //add char c at the end to change the capacity and size
      data = operator+(data, c);
    }
  }
}

String String::operator+(const String& other) const {

}
