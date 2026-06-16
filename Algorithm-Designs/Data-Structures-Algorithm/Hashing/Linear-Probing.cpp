#include <iostream>
using namespace std;
//LINEAR HASHING
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
            return (2*key+3)%size;
        }

        //LINEAR PROBING

        inline int linear_Probing(int index,int i)
        {
            return (index+i)%size; //LINEAR FORMULA
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
                int newIndex=linear_Probing(index,i);
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
    h.insert(9);
    h.insert(2);
    h.insert(6);
    h.insert(11);
    h.insert(13);
    h.insert(7);
    h.insert(12);
    h.display();
    return 0;
}