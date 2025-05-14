#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
  int data;
  Node *next;

  // constuctor
  Node(int val)
  {

    data = val;
    next = NULL;
  }
};

class List
{

  Node *head;
  Node *tail;

public:
  List()
  {

    head = tail = NULL;
  }
  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
      return;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }

  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    return;
  }

  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << "-> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};

int main()
{
  List l1;

  l1.push_front(1);
  l1.push_front(2);
  l1.push_front(3);
  l1.push_back(4);
  l1.print();

  // Node* node1 =new Node(10);
  // cout<< node1-> data <<endl;
  // cout<< node1-> next <<endl;

  return 0;
}