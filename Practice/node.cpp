#include<iostream>
using namespace std;
class Node
{
  public:
    Node *next;
    Node(int value)
      {
        int data = value ;
        next = NULL;
      }
}; //class node

class LinkedList
{
  public:
  Node *head;
  LinkedList()
{
  head = NULL;
}
void add(int value)
{
  Node *n1 = new node(value);
  if(head==NULL)
  {
    head=n1;
    return;
  }

  Node *temp = head;
  while(temp->next!=NULL)
    {  
      temp = temp->next;
    }
    temp->n1;
  
}// Add

void display()
{
  Node *temp = head;
  if(head == NULL)
  {
    std::cout<<"LL is empty";
    return;
  }
  while(temp!=NULL)
    {
      std::cout<<temp->data<<"->";
      temp=temp->next;
    }
      std::cout<<"Null";
}//display
};//Class LinkedList

int main()
{
  LinkedList l1 =new LinkedList;
  l1.add(10);
  l1.add(1);
  l1.add(12);
  l1.add(30);
  l1.display();
  return 0;
}


