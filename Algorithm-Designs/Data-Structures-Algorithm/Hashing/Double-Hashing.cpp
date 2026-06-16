#include <iostream>
using namespace std;

//DOUBLE HASHING

class Hashing
{
    public:
        int *hashTable;
        int size;
        int currentSize;
        Hashing(int size)
        {
            this->size=size;
            currentSize=0;
            hashTable=new int[size];
            for(int i=0;i<size;i++)
            {
                hashTable[i]=-1;
            }
        }

        //FIRST HASH FUNCTION

        inline int h1(int key)
        {
            return (2*key+3)%size;
        }

        //SECOND HASHING FUNCTION

        inline int h2(int key)
        {
            return (3*key+1)%size;
        }

        //DOUBLE HASHING

        inline int double_Hashing(int h1Index,int h2Index,int i)
        {
            return (h1Index+h2Index*i)%size; 
        }

        //INSERTION

        void insert(int key)
        {
            if(currentSize==size)
            {
                cout << "Hash Table Overflow\n";
                return;
            }
            int h1Index=h1(key);
            int h2Index=h2(key);
            int i=0;
            while(i<size)
            {
                int newIndex=double_Hashing(h1Index,h2Index,i);
                if(hashTable[newIndex]==-1)
                {
                    hashTable[newIndex]=key;
                    currentSize++;
                    return;
                }
                i++;
            }
            cout << "Unable to insert " << key << endl;
        }

        //DISPLAY

        void display()
        {
            cout << "HASHING TABLE:\n";
            for(int i=0;i<size;i++)
            {
                cout << i << " --> ";
                if(hashTable[i]!=-1)
                {
                    cout << hashTable[i] << endl;
                }
                else
                {
                    cout << "NULL" << endl;
                }
            }
        }
};

int main()
{
    Hashing h(10);
    h.insert(3);
    h.insert(2);
    h.insert(9);
    h.insert(6);
    h.insert(11);
    h.insert(13);
    h.insert(7);
    h.insert(12);
    h.display();
    return 0;
}