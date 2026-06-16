#include <iostream>
using namespace std;

//CIRCULAR LINKEDLISTS
class Node
{
  public:
    int data;
    Node *nextAddress;
    Node(int data)
    {
      this->data=data;
      nextAddress=nullptr;
    }
};

class CLinkedLists
{
  public:
    Node *head;
    CLinkedLists()
    {
      head=nullptr;
    }

    //TO INSERT

    void insert_end(int data)
    {
      Node *n=new Node(data);
      if(head==nullptr)
      {
        head=n;
        n->nextAddress=head;
      }
      else
      {
        Node *temp=head;
        while(temp->nextAddress!=head)
        {
          temp=temp->nextAddress;
        }
        temp->nextAddress=n;
        n->nextAddress=head;
      }
    }

    //TO DISPLAY

    void display()
    {
      Node *temp=head;
      cout << temp->data << " ";
      temp=temp->nextAddress;
      while(temp!=head)
      {
        cout<<temp->data<<" ";
        temp=temp->nextAddress;
      }
    }
};

int main() 
{
  CLinkedLists cl;
  cl.insert_end(10);
  cl.insert_end(20);
  cl.insert_end(30);
  cl.display();
  return 0;
}