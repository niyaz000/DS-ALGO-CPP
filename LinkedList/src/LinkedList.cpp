#include "./LinkedList.hpp"

LinkedList::LinkedList()
{
  this->head = nullptr;
}

void LinkedList::addToHead(int data)
{
  if(this->head == nullptr)
  {
    this->head = new Node(data);
  }
  this->head = new LinkedList::Node(data, this->head);
}

std::vector<int> LinkedList::toList()
{
  std::vector<int> vec;
  LinkedList::Node * temp = this->head;
  while(temp != nullptr) {
    vec.push_back(temp->data);
  }
  return vec;
}