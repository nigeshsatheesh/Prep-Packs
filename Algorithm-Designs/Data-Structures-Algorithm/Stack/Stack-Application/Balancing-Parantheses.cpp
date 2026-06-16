#include <iostream>
using namespace std;

//STACK APPLICATION//

//VALID PARENTHESES

class PStack
{
  public:
    char *arr;
    int top;
    PStack ()
    {
      arr=new char[100];
      top=-1;
    }
    bool isEmpty()
    {
      return top==-1;
    }
    bool isFull()
    {
      return top==99;
    }
    void push(char c)
    {
      arr[++top]=c;
    }
    char pop()
    {
      char c=arr[top];
      top--;
      return c;
    }
    bool isValid(string str)
    {
      for(char c:str)
      {
        if((c=='(')||(c=='[')||(c=='{'))
        {
          push(c);
        }
        else
        {
          if(isEmpty()) //str="})]"
          {
            return false;
          }
          char z=pop();
          if((z=='(' && c!=')')||(z=='[' && c!=']')||(z=='{' && c!='}'))
          {
              return false;
          }
        }
      }
      if(isEmpty())
      {
        return true;
      }
      return false;
    }
};

int main() 
{
  PStack ps;
  cout << ps.isValid("{[]()}") << endl;
}
