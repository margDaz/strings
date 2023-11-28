#include "Node.h"
#include <iostream>
#include <string>

Node::Node() : val(), nextNode(nullptr) {}

Node::Node(const Complex &other) : val(other), nextNode(nullptr) {}

Node::Node(const Node& other) : val(other.val), nextNode(nullptr) {}

//Accessors

Complex Node::getVal() const {
  return val;
}

Node* Node::getNextNode() const {
  return nextNode;
}

void Node::setNextNode(Node* node) {
  nextNode = node;
}



void Node::insertAtEnd(const Complex& complex) {
  Node* newNode = new Node(complex);
  if (!nextNode) {
// If the list is empty, make the new node the head
    nextNode = newNode;
  } else {
    // Traverse the list to find the last node
    Node* current = nextNode;
    while (current->getNextNode()) {
      current = current->getNextNode();
    }
  // Link the last node to the new node
    current->setNextNode(newNode);
  }
}
