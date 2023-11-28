#include "List.h"
#include <iostream>
#include <string>

int main() {
  Complex complexNum1(2., 3.);
  Complex complexNum2(1., 4.6);
  Complex complexNum3(4.3, -1.5);
  Complex complexNum4(5, -13.5);
  Complex complexNum5(5.2, -1.);

/*
  Node* node1 = new Node(complexNum1);

  node1->insertAtEnd(complexNum2);

  Node* current = node1;

  while(current != nullptr){
    std::cout<< current->getVal().stringify() << std::endl;
    current = current->getNextNode();
  }
    */

  List list1;
  list1.pushBack(complexNum1);
  list1.pushBack(complexNum2);
  list1.pushBack(complexNum4);
  list1.pushBack(complexNum5);

  list1.display();
  //list1.erase(3);
  //list1.display();
  list1.insert(complexNum3, 3);
  list1.display();

}
