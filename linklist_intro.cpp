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
  // constructor
  List()
  {

    head = tail = NULL;
  }

  // Push Front

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
  // push back
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

  void pop_front()
  {
    if (head == NULL)
    {
      cout << " LL is empty ";
      return;
    }

    Node *temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }

  void pop_back()
  {
    if (head == NULL)
    {
      cout << "link list is empty \n";
      return;
    }
    Node *temp = head;
    while (temp->next != tail)
    {
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }

  // insert middle of link list

  void insert(int val, int pos)
  {

    if (pos < 0)
    {
      cout << " Invalid Pos\n";
      return;
    }
    if (pos == 0)
    {
      push_front(val);
      return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
      if (temp == NULL)
      {
        cout << " Invalid pos \n";
        return;
      }
      temp = temp->next;
    }
    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
  }

  //  search in linklist

  int search(int key)
  {
    Node *temp = head;
    int index = 0;

    while (temp != NULL)
    {
      if (temp->data == key)
      {
        return index;
      }
      temp = temp->next;
      index++;
    }
    return -1;
  }

  ///  Print Link
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
  l1.insert(5, 2);
  // l1.pop_front();
  // l1.pop_front();
  // l1.print();
  // l1.pop_back();
  l1.print();

  cout << l1.search(9) << endl;

  return 0;
}