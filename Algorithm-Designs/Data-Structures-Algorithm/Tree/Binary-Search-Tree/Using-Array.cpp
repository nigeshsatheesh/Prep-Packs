#include <iostream>
using namespace std;

//BINARY SEARCH TREE USING ARRAY

class ArrayBST
{
  public:
    int size;
    int *arr;
    int count;
    ArrayBST(int size)
    {
      this->size=size;
      arr=new int[size];
      count=0;
      for(int i=0;i<size;i++)
      {
        arr[i]=-1;
      }
    }
    
    //INSERT
    
    void insert(int index,int data)
    {
      if(index>=size)
      {
        return;
      }
      if(arr[index]==-1)
      {
        arr[index]=data;
        count++;
        return;
      }
      if(data<arr[index])
      {
        insert(index*2+1,data);
      }
      else
      {
        insert(index*2+2,data);
      }
    }
    
    //DISPLAY
    
    void display()
    {
      for(int i=0;i<size;i++)
      {
        if(arr[i]!=-1)
        {
          cout << arr[i] << " ";
        }
      }
    }
    
    //INORDER
    
    void inOrder(int index)
    {
      if(index<size && arr[index]!=-1)
      {
        inOrder(index*2+1);
        cout << arr[index] << " ";
        inOrder(index*2+2);
      }
      else
      {
        return;
      }
    }
    
    //PREORDER
    
    void preOrder(int index)
    {
      if(index<size && arr[index]!=-1)
      {
        cout << arr[index] << " ";
        preOrder(index*2+1);
        preOrder(index*2+2);
      }
      else
      {
        return;
      }
    }
    
    //POSTORDER
    
    void postOrder(int index)
    {
      if(index<size && arr[index]!=-1)
      {
        postOrder(index*2+1);
        postOrder(index*2+2);
        cout << arr[index] << " ";
      }
      else
      {
        return;
      }
    }
};

int main()
{
  ArrayBST a(20);
  a.insert(0,90);
  a.insert(0,20);
  a.insert(0,50);
  a.insert(0,40);
  a.insert(0,30);
  a.display();
  cout << endl;
  a.inOrder(0);
  cout << endl;
  a.preOrder(0);
  cout << endl;
  a.postOrder(0);
  cout << endl;
}