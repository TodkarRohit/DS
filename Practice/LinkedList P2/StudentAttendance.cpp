#include<iostream>
using namespace std;

class Node
{
  public:
    
    int data;
    Node *next;
    
    Node(int value)
    {
      data = value;
      next = NULL;
    }
}; //class Node


class LinkedList
{
    public:
        Node *head;
        LinkedList()
        {
            head = NULL;
        }

        void add()
        {
            Node *n1 = new Node(value)
            if (head == NULL)
            {
                head = n1;
                return;
            }
            Node *temp = head;
            while (temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp->next = n1;
        }//add()
        void display()
        {
            Node *temp = head;
            if(head == NULL)
            {
                cout<<"LinkedList is Empty";
                return;
            }
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL";
        } //display()
}; //LinkedList 

int main()
{
    LinkedList l1;
    l1.add(1);
    l1.add(2);
    l1.display();
  return 0; 
}
