#include <string>
#include "Complex.h"


class Node {
  protected :
    Complex val;
    Node* nextNode;

    Node();
    Node(const Complex &other);

  public :
    Node(const Node& other);

    Complex getVal() const;
    Node* getNextNode() const;
    void setNextNode (Node* node);

    void insertAtEnd(const Complex& complex);

    friend class List;

};
