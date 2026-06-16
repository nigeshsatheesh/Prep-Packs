#include <iostream>
using namespace std;

//SEPARATE CHAINING

class Node
{
    public:
        int data;
        Node* nextAddress;
        Node(int data)
        {
            this->data=data;
            nextAddress=nullptr;
        }
};

class Hashing
{
    public:
        int size;
        Node* hashTable[100];
        Hashing(int size)
        {
            this->size=size;
            for(int i=0;i<size;i++)
            {
                hashTable[i]=nullptr;
            }
        }

        //HASH FUNCTION

        inline int hashFunction(int key)
        {
            return key%size;
        }

        //INSERTION

        void insert(int key)
        {
            int location=hashFunction(key);
            Node* n=new Node(key);
            if(hashTable[location]==nullptr)
            {
                hashTable[location]=n;
            }
            else
            {
                Node* temp=hashTable[location];
                while(temp->nextAddress!=nullptr)
                {
                    temp=temp->nextAddress;
                }
                temp->nextAddress=n;
            }
        }

        //DISPLAY

        void display()
        {
            cout << "HASH TABLE:\n";
            for(int i=0;i<size;i++)
            {
                cout << i << " --> ";
                if(hashTable[i]==nullptr)
                {
                    cout << "NULL\n";
                }
                else
                {
                    Node* temp=hashTable[i];
                    while(temp!=nullptr)
                    {
                        cout << temp->data  << " ";
                        temp=temp->nextAddress;
                    }
                    cout << endl;
                }
            }
        }
};

int main()
{
    Hashing h(5);
    h.insert(12);
    h.insert(22);
    h.insert(32);
    h.insert(15);
    h.insert(7);
    h.insert(17);
    h.insert(18);
    h.insert(23);
    h.display();
    return 0;
}