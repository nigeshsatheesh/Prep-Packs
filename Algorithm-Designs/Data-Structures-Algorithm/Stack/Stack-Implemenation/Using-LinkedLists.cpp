#include <iostream>
using namespace std;

//STACK IMPLEMENTATION USING LINKEDLISTS

class StackNode
{
  public:
    int data;
    StackNode* nextAddress;
    StackNode(int data)
    {
      this->data=data;
      nextAddress=nullptr;
    }
};

class StackLinkedLists
{
  public:
    int size;
    int count;
    StackNode* head;
    StackLinkedLists(int size)
    {
      head=nullptr;
      count=0;
      this->size=size;
    }
    
    bool isFull()
    {
      return count==size;
    }
    
    bool isEmpty()
    {
      return count==0;
    }
    
    void push(int data)//insert_begin()
    {
      if(isFull())
      {
        cout << "Overflow";
        return;
      }
      StackNode* n=new StackNode(data);
      n->nextAddress=head;
      head=n;
      count++;
    }
    
    void pop()//delete_begin()
    {
      if(isEmpty())
      {
        cout << "Underflow";
        return;
      }
      cout<<head->data<<endl;
      head=head->nextAddress;
      count--;
    }
    
    int peek()
    {
      if(isEmpty())
      {
        cout << "Underflow";
        return 0;
      }
      return head->data;
    }
    
    void display()
    {
      if(isEmpty())
      {
        cout<<"Underflow";
        return;
      }
      StackNode* temp=head;
      while(temp!=nullptr)
      {
        cout<<temp->data<<" ";
        temp=temp->nextAddress;
      }
    }
};

int main() 
{
  StackLinkedLists st(3);
  st.push(10);
  st.push(20);
  st.push(30);
  st.display();
  cout<<endl<<st.peek()<<endl;
  st.pop();
  st.display();
  cout<<endl;
  cout<<st.peek()<<endl;
  
}