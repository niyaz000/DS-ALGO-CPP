#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <vector>

class LinkedList
{
  public:
    LinkedList();
    ~LinkedList();
    void addToHead(int data);
    void addToTail(int data);

    std::vector<int> toList();
  private:
    class Node {
      public:
        Node(int data, Node * next = nullptr)
        {
          this->data = data;
          this->next = next;
        }
        Node * next;
        int data;
    };
    Node* head;
};

#endif
