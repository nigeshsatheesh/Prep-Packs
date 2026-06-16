#include <iostream>
using namespace std;

//STACK IMPLEMENTATION USING ARRAY

class Stack
{
  public:
    int size;
    int *arr;
    int top;
    int count;
    Stack(int size)
    {
      this->size=size;
      arr=new int[size];
      top=-1;
      count=0;
    }
    
    //OVERFLOW CONDITION
    
    bool isFull()
    {
      return top==size-1;
    }
    
    //UNDERFLOW CONDITION
    
    bool isEmpty()
    {
      return top==-1;
    }
    
    //PUSH FUNCTION
    
    void push(int data)
    {
      if(isFull())
      {
        cout << "Overflow";
        return;
      }
      arr[++top]=data;
      count++;
    }
    
    //POP FUNCTION
    
    int pop()
    {
      if(isEmpty())
      {
        cout << "Underflow";
      }
      count--;
      return arr[top--];
    }
    
    //PEEK FUNCTION
    
    int peek()
    {
      return arr[top];
    }
    
    //SIZE OF STACK
    
    int stack_size()
    {
      return count;
    }

    //DISPLAY FUNCTION;
    
    void display()
    {
      for(int i=0;i<=top;i++)
      {
        cout << arr[i] << " ";
      }
    }
};

int main() 
{
  Stack st(5);
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.display();
  cout << endl << st.pop() << endl;
  st.display();
  cout << endl << st.peek() << endl;
  cout << st.stack_size();
}