#include <iostream>
using namespace std;

// DOUBLY LINKED LISTS // 

class Node
{
  public:
    int data;
    Node *left; //previous node address
    Node *right; //next node address
    Node(int data)
    {
      this->data=data;
      left=nullptr;
      right=nullptr;
    }
};

class DLinkedLists
{
  public:
    Node *head;
    DLinkedLists()
    {
      head=nullptr;
    }
    
    // TO INSERT A NODE AT THE END
    
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
        while(temp->right!=nullptr)
        {
          temp=temp->right;
        }
        n->left=temp;
        temp->right=n;
      }
    }
    
    // TO DISPLAY THE NODES OF A LINKED LIST
    
    void display()
    {
      Node *temp=head;
      while(temp!=nullptr)
      {
        cout << temp->data;
        if(temp->right!=nullptr)
        {
          cout << " ";
        }
        temp=temp->right;
      }
    }
    
    // TO INSERT ELEMENT AT A SPECIFIC POSITION
    
    void insert_at(int index,int data)
    {
      if(index==1)
      {
        insert_begin(data);
        return;
      }
      Node *n=new Node(data);
      Node *temp=head;
      int i=1;
      while(i<index-1 && temp!=nullptr)
      {
        i++;
        temp=temp->right;
      }
      if(temp==nullptr)
      {
        cout<<"Invalid index";
        return;
      }
      n->left=temp;
      n->right=temp->right;
      if(temp->right!=nullptr)
        temp->right->left=n;
      temp->right=n;
    }
    
    //TO INSERT NODE AT BEGINING
    
    void insert_begin(int data)
    {
      Node *n=new Node(data);
      if(head!=nullptr)
      {
        head->left=n;
      }
      n->right=head;
      head=n;
    }
    
    //TO DELETE AT END
    
    void delete_end()
    {
      if (head==nullptr)
      {
        cout<<"No node to delete";
        return;
      }
      else if(head->right==nullptr)
      {
        delete_begin();
        return;
      }
      Node *temp=head;
      while (temp->right->right!=nullptr)
      {
        temp=temp->right;
      }
      temp->right=nullptr;
    }
    
    // TO DELETE NODE AT BEGINING
    
    void delete_begin()
    {
      if (head==nullptr)
      {
        cout<<"No node to delete";
        return;
      }
      head=head->right;
      head->left=nullptr;
    }
    
    //TO DELETE A NODE AT A DESIRED INDEX
    
    void delete_at(int index)
    {
      if (head==nullptr)
      {
        cout<<"No node to delete";
        return;
      }
      else if (index==1)
      {
        delete_begin();
        return;
      }
      int i=1;
      Node *temp=head;
      while (i<index-1 && temp!=nullptr){
        temp=temp->right;
        i++;
      }
      if(temp==nullptr)
      {
        cout << "Out of range";
        return;
      }
      temp->right->left=nullptr;
      temp->right=temp->right->right;
    }
    
    //TO SORT DOUBLY LINKEDLISTS
    
    void sort_doublylinkedlists()
    {
      Node *i=head;
      while(i!=nullptr)
      {
        Node *j=i->right;
        while(j!=nullptr)
        {
          if(i->data>j->data)
          {
            int temp=i->data;
            i->data=j->data;
            j->data=temp;
          }
          j=j->right;
        }
        i=i->right;
      }
    }
    
    //PALINDROME CHECK
    
      bool isPalindrome()
    {
      Node* i=head;
      Node* j=head;
      while(j->right!=nullptr)
      {
        j=j->right;
      }
      while(i->left!=j && i!=j)//i->left!=j for even no of nodes. i!=j for odd no  of nodes
      {
        if(i->data==j->data)
        {
          i=i->right;
          j=j->left;
        }
        else
        {
          return false;
        }
      }
      return true;
    }
};

int main() 
{
  DLinkedLists dl;
  dl.insert_end(10);
  dl.insert_end(20);
  dl.insert_end(20);
  dl.insert_end(10);
  if(dl.isPalindrome())
  {
    cout<<"Yes";
  }
  else
  {
    cout << "No";
  }
  return 0;
}