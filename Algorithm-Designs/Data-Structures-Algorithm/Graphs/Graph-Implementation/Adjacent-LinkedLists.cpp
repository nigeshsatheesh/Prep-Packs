#include <iostream>
using namespace std;

//GRAPH IMEPLEMENTATION USING LINKEDLISTS

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

class Graph
{
    public:
        int vertex;
        Node* vertArray[100];
        Graph(int vertix)
        {
            this->vertex=vertix;
            for(int i=0;i<vertix;i++)
            {
                vertArray[i]=nullptr;
            }
        }

        //INSERTION

        void connections(int src, int dest)
        {
            Node *n=new Node(dest);
            n->nextAddress=vertArray[src];
            vertArray[src]=n;
        }

        //DISPLAY

        void display()
        {
            for(int i=0;i<vertex;i++)
            {
                cout << i << " -> ";
                Node* temp=vertArray[i];
                while(temp!=nullptr)
                {
                    cout << temp->data << " ";
                    temp=temp->nextAddress;
                }
                cout << endl;
            }
        }
};

int main()
{
    Graph g(5);
    g.connections(0,1);     
    g.connections(0,2);     
    g.connections(0,3);     
    g.connections(1,3);
    g.connections(2,3);
    g.display();
}