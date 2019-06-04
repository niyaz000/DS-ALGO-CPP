#include "./LinkedList.hpp"

LinkedList::LinkedList()
{
  this->head = nullptr;
}

LinkedList::~LinkedList()
{

}

void LinkedList::addToHead(int data)
{
  if(this->head == nullptr) {
    this->head = new Node(data, nullptr);
    return;
  }
  this->head = new LinkedList::Node(data, this->head);
}

std::vector<int> LinkedList::toList()
{
  std::vector<int> vec;
  LinkedList::Node * temp = this->head;
  while(temp != nullptr) {
    vec.push_back(temp->data);
    temp = temp->next;
  }
  return vec;
}

void LinkedList::addToTail(int data)
{
  if(this->head == nullptr) {
    return this->addToHead(data);
  }
  Node * temp = this->head;
  while(temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = new LinkedList::Node(data, nullptr);
}

