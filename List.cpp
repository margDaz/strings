#include "List.h"

List::List() : head(nullptr), length(0) {}

Node* List::getHead(){
  return head;
}

int List::getLength(){
  return length;
}

void List::pushBack(const Complex& complex){
  Node* newNode = new Node(complex);
  if (!head) {
// If the list is empty, make the new node the head
    head = newNode;
  } else {
    // Traverse the list to find the last node
    Node* current = head;
    while (current->nextNode) {
      current = current->nextNode;
    }
  // Link the last node to the new node
    current->setNextNode(newNode);
  }

  length ++;
}

void List::display() {
    Node* current = head;
    while (current) {
        current->val.stringify();
        std::cout << " -> ";
        current = current->getNextNode();
    }
    std::cout << "nullptr\n";
}

void List::erase(int position){

  if (position < 0 || position >= length) {
    std::cerr << "Invalid position. Cannot erase node.\n";
    return;
  }

  Node* current = head;
  Node* previous = nullptr;

  for (int i = 0; i<position ; ++i){
    previous = current;
    current = current->nextNode;
  }

  if (previous) {
        // Link the previous node to the next node, skipping the current node
    previous->setNextNode(current->nextNode);
  } else {
        // If the node to be erased is the head, update the head
    head = current->nextNode;
  }

  delete current;

  length --;

}

void List::insert(Complex newComplex, int position){

  if (position < 0 || position >= length) {
    std::cerr << "Invalid position. Cannot insert node.\n";
    return;
  }
  Node* newNode = new Node (newComplex);
  Node* current = head;
  Node* next = current->nextNode;

  for (int i = 0; i<position ; ++i){
    current = next;
    next = current->nextNode;
  }

  if (!next) {
    this->pushBack(newComplex);

  } else {
        // If the node to be erased is the head, update the head
    current->nextNode = newNode;
    newNode->nextNode = next;
  }

  length ++;

}
