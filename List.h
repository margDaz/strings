#include <iostream>
#include "Complex.h"
#include "Node.h"

class List {
  public :
    List();

    Node* getHead();
    int getLength();
    void pushBack(const Complex& complex);

    void display();

    void erase(int position);
    void insert(Complex newComplex, int position);

    friend class Node;

  protected :
    Node* head;
    int length;
} ;
