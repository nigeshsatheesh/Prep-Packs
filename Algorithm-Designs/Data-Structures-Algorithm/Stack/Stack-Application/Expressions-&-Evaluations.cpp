#include <iostream>
using namespace std;

//EXPRESSIONS AND EVALUATION

class EStack
{
  public:
    char* arr;
    int top;
    EStack()
    {
      top=-1;
      arr=new char[100];
    }
    bool isEmpty()
    {
      return top==-1;
    }
    bool isFull()
    {
      return top==99;
    }
    void push(int data)
    {
      arr[++top]=data;
    }
    int pop()
    {
      
      return arr[top--];
    }
    int peek()
    {
      return arr[top];
    }
    int precedence(char c)
    {
      if(c=='*' || c=='/')
      {
        return 2;
      }
      else if(c=='+' || c=='-')
      {
        return 1;
      }
      return 0;
    }
    
    //POSTFIX TO INFIX - STACK APPLICATION
    
    void postfix_to_Infix(string s)
    {
      for(char c:s)
      {
        if(isdigit(c))
        {
          push(c-'0');
        }
        else
        {
          int a=pop();
          int b=pop();
          switch(c)
          {
            case '+':
              push(b+a);
              break;
            case '-':
              push(b-a);
              break;
            case '*':
              push(b*a);
              break;
            case '/':
              push(b/a);
              break;
            case '%':
              push(b%a);
              break;
          }
        }
      }
      cout << peek() << endl;
    }
    
    //PREFIX TO INFIX - STACK APPLICATION
    
    void prefix_to_Infix(string s)
    {
      for(int i=s.length()-1;i>=0;i--)
      {
        char c=s[i];
        if(isdigit(c))
        {
          push(c-'0');
        }
        else
        {
          int a=pop();
          int b=pop();
          switch(c)
          {
            case '+':
              push(a+b);
              break;
            case '-':
              push(a-b);
              break;
            case '*':
              push(a*b);
              break;
            case '/':
              push(a/b);
              break;
            case '%':
              push(a%b);
              break;
          }
        }
      }
      cout << peek() << endl;
    }
    
    //INFIX TO POSTFIX - STACK AAPPLICATION
    
    void infix_to_Postfix(string str)
    {
      string expression;
      for(char c:str)
      {
        if(c>='a' && c<='z')
        {
          expression+=c;
        }
        else if(c=='(')
        {
          push(c);
        }
        else if(c==')')
        {
          while(arr[top]!='(')
          {
            expression+=pop();
          }
          pop();
        }
        else
        {
          while(!isEmpty() && precedence(c)<=precedence(arr[top]))
          {
            expression+=pop();
          }
          push(c);
        }
      }
      expression+=pop();
      cout << expression << endl;
    }
};

int main() 
{
  EStack es;
  es.postfix_to_Infix("42+53-*");
  es.prefix_to_Infix("*+42-53");
  es.infix_to_Postfix("(a-b/c)*(a/b-c)");
  return 0;
}