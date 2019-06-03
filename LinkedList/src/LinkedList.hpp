#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <vector>

class LinkedList
{
  public:
    LinkedList();
    void addToHead(int data);
    std::vector<int> toList();
  private:
    class Node {
      public:
        Node(int data, Node * next = nullptr);
        Node * next;
        int data;
    };
    Node* head;
};

#endif
