#include<iostream>
using namespace std;

//QUEUE IMPLEMENTATION USING ARRAY

class queue{
    public:
        int data;
        int front;
        int rear;
        int* arr;
        int size;
        queue(int size)
        {
            this->size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }
        
        //OVERFLOW CONDTION (REAR==SIZE-1)

        bool isfull()
        {
            return rear==size-1;
        }
        
        //UNDERFLOW CONDTION (FRONT==-1 OR REAR<FRONT)

        bool isempty()
        {
            return front == -1 || front > rear;
        }
        
        //INSERTION (REAR INCREASES)

        void enque(int data)
        {
            if(isfull())
            {
                cout<<"it is full";
                return ;
            }
            else if(front == -1 && rear == -1)
            {
                arr[++rear]=data;
                front++;
            }
            else
            {
                arr[++rear]=data;
            }
        }
        
        //DISPLAY

        void display()
        {
            if(isempty())
            {
                cout<<"no data to display";
                return;
            }
            for(int i=front;i<rear;i++)
            {
                cout<<arr[i]<<' ';
            }
        }
        
        //DELETION (FRONT INCREASES)

        int deque()
        {
            if(isempty())
            {
                cout<<"it is empty";
                return 0;
            }
            int a=arr[front];
            front++;
            return a;
        }
};
int main()
{
    queue qu(10);
    qu.enque(10);
    qu.enque(20);
    qu.enque(30);
    qu.enque(40);
    qu.enque(50);
    cout<<"the deleted element is "<<qu.deque()<<endl;
    cout<<"the deleted element is "<<qu.deque()<<endl;
    qu.display();
}