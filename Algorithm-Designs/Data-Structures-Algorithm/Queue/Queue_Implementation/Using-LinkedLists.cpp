#include <iostream>
using namespace std;

//QUEUE IMPLEMENTAION USING LINKEDLISTS

class Node {
    public:
        int data;
        Node* next;
        Node(int val)
        {
            data = val;
            next = NULL;
        }
};

class Queue{
    public:
        Node* front = NULL;
        Node* back = NULL;

        //INSERTION

        void push(int val)
        {
            Node* n = new Node(val);
            if(front==NULL)
            {
                front = n;
                back = n;
            }
            else
            {
                back->next = n;
                back = n;
            }
        }

        //DELETION

        void pop()
        {
            if(front == NULL) 
            {
                return;
            }
            Node* temp = front;
            front = front->next;
            delete temp;
            if(front == NULL) 
            {
                back = NULL;
            }
        }

        ~Queue() 
        {
            while (front != NULL) 
            {
                Node* temp = front;
                front = front->next;
                delete temp;
            }
            back = NULL;
        }

        //UNDERFLOW CONDITION

        bool isempty()
        {
            return front==NULL;
        }

        //OVERFLOW CONDITION

        void top()
        {
            if(front==NULL)
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<front->data<<endl;
        }
        
        //DISPLAY
        
        void display()
        {
            Node* temp = front;
            while (temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            } 
        }
};

int main()
{
    Queue q;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    q.display();
}