#include <iostream>
using namespace std;

//DEPTH FRONT SEARCH - GRAPH TRAVERSAL

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
        Node* vertexArray[100];
        Graph(int vertix)
        {
            this->vertex=vertix;
            for(int i=0;i<vertix;i++)
            {
                vertexArray[i]=nullptr;
            }
        }

        void connections(int src, int dest)
        {
            Node *n=new Node(dest);
            n->nextAddress=vertexArray[src];
            vertexArray[src]=n;
        }

        void display()
        {
            for(int i=0;i<vertex;i++)
            {
                cout << i << " -> ";
                Node* temp=vertexArray[i];
                while(temp!=nullptr)
                {
                    cout << temp->data << " ";
                    temp=temp->nextAddress;
                }
                cout << endl;
            }
        }

        //DFS - TRAVERSES ALL THE DEPTH NODES OF A SPECIFIC NODE (CHILD TO CHILD TRAVERSAL)

        void DFStraversal(int start,bool visited[])
        {
            visited[start]=true; //MARKS TRUE IF THE VERTEX IS VISITED
            cout << start << " "; //PRINTS VISITED VERTEX
            Node *temp=vertexArray[start]; //ADDRESS OF THE FIRST CHILD OF THE START VERTEX IS ASSINGED
            if(temp==nullptr) //IF START HAS ZERO CONNECTIONS
            {
                start++;
                temp=vertexArray[start];
            }
            while(temp!=nullptr) //CHILDS OF THE TEMP VERTEX ARE TRAVERSED
            {
                if(!visited[temp->data])
                {
                    DFStraversal(temp->data,visited);
                }
                temp=temp->nextAddress;
            }
        }

        void DFS(int start)
        {
            bool *visited=new bool[vertex];
            for(int i=0;i<vertex;i++)
            {
                visited[i]=false;
            }
            DFStraversal(start,visited);
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
    g.DFS(0);
}