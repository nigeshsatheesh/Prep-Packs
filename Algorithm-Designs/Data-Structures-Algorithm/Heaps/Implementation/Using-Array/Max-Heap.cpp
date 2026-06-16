#include <iostream>
using namespace std;

class MaxHeap{
  public:
    int* arr;
    int size;
    int index;
    MaxHeap(int size)
    {
      this->size=size;
      index=0;
      arr=new int[size];
      for(int i=0;i<size;i++)
      {
        arr[i]=-1;
      }
    }
    
    //MAX HEAP CONDITION
    
    void heapifyUp(int index)
    {
      while(index>0)
      {
        int parent=(index-1)/2;
        if(arr[parent]<arr[index])
        {
          int temp=arr[index];
          arr[index]=arr[parent];
          arr[parent]=temp;
          index=parent;
        }
        else
        {
          break;
        }
      }
    }
    
    //INSERTION
    
    void insert(int data)
    {
      if(index==size)
      {
        cout << "Heap Overflow\n";
        return;
      }
      arr[index]=data;
      heapifyUp(index);
      index++;
    }
    
    //DISPLAY
    
    void display()
    {
      for(int i=0;i<index;i++)
      {
        cout << arr[i] << " ";
      }
    }
};
int main() 
{
  MaxHeap h(10);
  h.insert(10);
  h.insert(20);
  h.insert(60);
  h.insert(40);
  h.insert(30);
  h.insert(50);
  h.display();
}