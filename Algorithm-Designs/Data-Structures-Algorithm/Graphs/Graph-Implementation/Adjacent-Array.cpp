#include <iostream>
using namespace std;

//GRAPH IMEPLEMENTATION USING ADJACENT ARRAY

class Graph
{
    public:
        int vertix;
        int arr[100][100];
        Graph(int vertix)
        {
            this->vertix=vertix;
            for(int i=0;i<vertix;i++)
            {
                for(int j=0;j<vertix;j++)
                {
                    arr[i][j]=0;
                }
            }
        }

        //DIRECTIONAL GRAPH INSERTION

        void directional_connections(int src, int dest)
        {
            arr[src][dest]=1;
        }

        //UNDIRECTIONAL GRAPH INSERTION

        void undirectional_connections(int src, int dest)
        {
            arr[src][dest]=1;
            arr[dest][src]=1;
        }

        //DISPLAY

        void display()
        {
            for(int i=0;i<vertix;i++)
            {
                for(int j=0;j<vertix;j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
};

/*
graph

    0---1
    | \ |
    2---3

*/

int main()
{
    Graph g(5);                         
    g.directional_connections(0,1);     
    g.directional_connections(0,2);     
    g.directional_connections(0,3);     
    g.directional_connections(1,3);
    g.directional_connections(2,3);
    g.display();
    return 0;
}