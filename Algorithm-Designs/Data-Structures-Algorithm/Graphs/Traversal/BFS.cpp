#include <iostream>
using namespace std;

//BREADTH FRONT SEARCH - GRAPH TRAVERSAL

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

        void connections(int src, int dest)
        {
            Node *n=new Node(dest);
            n->nextAddress=vertArray[src];
            vertArray[src]=n;
        }

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

        //BFS - TRAVERSES ALL THE CHILD NODES OF A SPECIFIC NODE AT LEVEL ORDER

        void BFS(int start)
        {
            bool *visited=new bool[vertex]; //TELLS WHETHER THE SPECIFIC NODE IS VISITED OR NOT
            for(int i=0;i<vertex;i++)
            {
                visited[i]=false;
            }
            int* queue=new int[vertex]; //STORES GRAPH ELEMENTS   
            int front=0,rear=0;
            queue[rear++]=start;  // VISITING THE START NODE                                    
            visited[start]=true; 
            while(front<rear)
            {
                int node=queue[front++]; //POP THE START NODE
                cout << node << " "; //DISPLAY THE NODES
                Node* temp=vertArray[node];
                if(temp==nullptr) //IF START HAS ZERO CONNECTIONS
                {
                    node++;
                    temp=vertArray[node];
                }
                while(temp!=nullptr)
                {
                    if(!visited[temp->data])
                    {
                        queue[rear++]=temp->data;
                        visited[temp->data]=true;
                    }
                    temp=temp->nextAddress;
                }
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
    g.BFS(0);
}