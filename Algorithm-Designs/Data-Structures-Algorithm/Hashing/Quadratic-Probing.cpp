#include <iostream>
using namespace std;

//QUADRATIC HASHING

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

        //HASH FUNCTION

        inline int hash_Function(int key)
        {
            return key%size;
        }

        //QUADRATIC PROBING

        inline int quadratic_Probing(int index,int i)
        {
            return (index+(i*i))%size; //QUADRATIC FORMULA
        }

        //INSERTION

        void insert(int key)
        {
            if(currentSize==size)
            {
                cout << "Hash Table Overflow";
                return;
            }
            int index=hash_Function(key);
            int i=0;
            while(i<size)
            {
                int newIndex=quadratic_Probing(index,i);
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
    Hashing h(7);
    h.insert(70);
    h.insert(93);
    h.insert(40);
    h.insert(47);
    h.insert(10);
    h.insert(55);
    h.display();
    return 0;
}