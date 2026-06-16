#include <iostream>
using namespace std;

// SINGLY LINKED LIST

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

class LinkedList
{
  public:
    Node *head;
    LinkedList()
    {
      head=nullptr;
    }

    //TO ADD ELEMENTS IN LINKEDLIST
    
    void insert_end(int data)
    {
      Node *n=new Node(data);
      if(head==nullptr)
      {
        head=n; 
      }
      else
      {
        Node *temp=head;
        while(temp->nextAddress!=nullptr)
        {
          temp=temp->nextAddress;
        }
        temp->nextAddress=n;
      }
    }

    // TO DISPLAY LINKEDLIST ELEMENTS
    
    void display()
    {
      Node *temp=head;
      while(temp!=nullptr)
      {
        cout << temp->data;
        temp=temp->nextAddress;
        if(temp!=nullptr)
        {
          cout << " ";
        }
      }
    }
    
    //TO INSERT AN ELEMENT AT THE BEGINING
    
    void insert_begin(int data)
    {
      Node *n= new Node(data);
      n->nextAddress=head;
      head=n;
    }
    
    //TO INSERT AN ELEMENT AT DESIRED INDEX
    
    void insert_at(int data,int index)
    {
      if(index==1)
      {
        insert_begin(data);
        return;
      }  
      int i=1;
      Node *n=new Node(data);
      Node *temp=head;
      while(i<index-1 && temp!=nullptr)
      {
        temp=temp->nextAddress;
        i++;
      }
      n->nextAddress=temp->nextAddress;
      temp->nextAddress=n;
    }
    
    //TO DELETE A NODE FROM THE BEGINING
    
    void delete_begin()
    {
      if(head==nullptr)
      {
        cout << "No node is present to be deleted";
        return;
      }
      else if(head->nextAddress==nullptr)
      {
        head=nullptr;
        return;
      }
      head=head->nextAddress;
    }
    
    //TO DELETE A NODE FROM THE END
    
    void delete_end()
    {
      Node *temp=head;
      if(head==nullptr)//no nodes present
      {
        cout << "No node is inserted to be deleted";
        return;
      }
      else if(head->nextAddress==nullptr)//only one node is present
      {
        head=nullptr;
        return;
      }
      while(temp->nextAddress->nextAddress!=nullptr)//to find the last before node whose nextAddress of nextAddress is nullptr.
      {
        temp=temp->nextAddress;
      }
      temp->nextAddress=nullptr;
    }
    
    //TO DELETE A NODE AT A SPECIFIC POSITION
    
    void delete_at(int index)
    {
      if(head==nullptr)
      {
        cout << "No node present to be deleted";
        return;
      }
      else if(index==1)
      {
        delete_begin();
      }
      int i=1;
      Node *temp=head;
      while(i<index-1 && temp!=nullptr)
      {
        temp=temp->nextAddress;
        i++;
      }
      if(temp==nullptr)//when deletion occurs at out of index
      {
        cout << "Invalid position";
        return;
      }
      temp->nextAddress=temp->nextAddress->nextAddress;
    }
    
    //TO SORT A SINGLY LINKED LISTS

    void sort_linkedlists()
    {
      //using while loop
      Node *tempi=head;
      while(tempi!=nullptr)
      {
        Node *tempj=tempi->nextAddress;
        while(tempj!=nullptr)
        {
          if(tempi->data>tempj->data)
          {
            int temp=tempi->data;
            tempi->data=tempj->data;
            tempj->data=temp;
          }
          tempj=tempj->nextAddress;
        }
        tempi=tempi->nextAddress;
      }
      
      /*using for loop
      for(Node *i=head;i!=nullptr;i=i->nextAddress)
      {
        for(Node *j=i->nextAddress;j!=nullptr;j=j->nextAddress)
        {
          if(i->data>j->data)
          {
            int temp=i->data;
            i->data=j->data;
            j->data=temp;
          }
        }
      }*/

    }
    
    //TO REVERSE A LINKEDLIST
    
    void reverse_linkedlists()
    {
      Node *current=head;
      Node *prev=nullptr;
      Node *nextNode;
      while(current!=nullptr)
      {
        nextNode=current->nextAddress;
        current->nextAddress=prev;
        prev=current;
        current=nextNode;
      }
      head=prev;
    }

    //MIDDLE ELEMENT OF LINKEDLISTS - ROBERT FLOYD'S/HARE AND TORTOISE METHOD

    void middleElement()
    {
      Node* slow=head;
      Node* fast=head;
      while(fast!=nullptr && fast->nextAddress)
      {
        slow=slow->nextAddress;
        fast=fast->nextAddress->nextAddress;
      }
      cout << "Middle Element: " << slow->data; 
    }
};

int main() 
{
  LinkedList l;
  l.insert_end(30);
  l.insert_end(20);
  l.insert_end(10);
  l.insert_end(40);
  l.insert_begin(50);
  l.insert_at(60,4);
  l.delete_end();
  l.delete_at(3);
  l.display();
  cout << endl;
  l.sort_linkedlists();
  l.display();
  cout << endl;
  l.reverse_linkedlists();
  l.display();
  cout << endl;
  l.middleElement();
}