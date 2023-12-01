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

<<<<<<< HEAD
String::~String(){
  delete[] data;
  size = 0;
}

int String::getCapacity(){
  return capacity;
}

bool String::isEmpty(){
  return size == 0;
=======
int String::max_size() const{
  return maxSize;
}

void String::resize(int newSize,char c){
  size = newSize;
  if (newSize<=size){
    //remove all, to replace by less (aka the newSize begining of data)
    stockData = data[0;newSize-1];
    clear();
    data = stockData;
  }else{
    int i = size;
    for(i=size;i<newSize;++i){
      //add char c at the end to change the capacity and size
      data = operator+(data, c);
    }
  }
}

String String::operator+(const String& other) const {

>>>>>>> 1069311dbb3a1b0d031d1f14c7cd2c6ed6d76c86
}
