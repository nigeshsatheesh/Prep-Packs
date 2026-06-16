#include <iostream>
using namespace std;

//CIRCULAR QUEUE IMPLEMENTATION USING ARRAY

class CQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size)
    {
        this ->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    //INSERTION

    void enque(int data){
        if (isFull())
        {
            cout << "Queue Full" << endl;
            return;
        }
        else if(front == -1 && rear == -1)
        {
            arr[++rear] = data;
            ++front;
        }
        else
        {
            rear = (rear+1)%size; //LAST POINTER CONNECTED TO THE START TO FORM CIRCLE
            arr[rear] = data;
        }
    }

    //DELETION

    int deque()
    {
        int a = -1;
        if(isEmpty())
        {
            cout << "queue is empty";
            cout << endl;
        }
        else if (front == rear )
        {
            a= arr[front];
            rear = -1;
            front = -1;
        }
        else
        {
            a= arr[front];
            front = (front +1)%size; //FIRST POINTER CONNECTED TO THE END TO FORM CIRCLE
        }
        return a;
    }

    //OVERFLOW CONDITION ((REAR+1)%SIZE==FRONT  -> LAST POINTER CONNECTED TO THE START TO FORM CIRCLE)

    bool isFull(){
        return (rear+1) % size ==  front;
    }

    //UNDERFLOW CONDITION (REAR==-1 && FRONT==-1)

    bool isEmpty(){
       return rear == -1 && front == -1; 
    }

    //DISPLAY

    void display(){
         if(isEmpty()){
             cout << "no data to deploy";
             return;
         }
         if (front <= rear){
             for(int i = front ;i<= rear;i++){
                 cout << arr[i] << " ";
             }
         }
         else{
             for(int i = front ;i< size;i++){
                 cout << arr[i] << " ";
             }
             for(int i = 0 ;i<= rear;i++){
                 cout << arr[i] << " ";
             }
         }
    }
};

int main() {
    int size = 5;
    CQueue q(size);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    cout << q.deque();
    cout <<endl;
    q.display();

    return 0;
}
