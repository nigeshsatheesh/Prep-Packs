#include <iostream>
#include <queue>
using namespace std;

//PRIORITY QUEUE

int main()
{
    priority_queue <int> pq; //arranges the elements in descending order
    pq.push(7);
    pq.push(8);
    pq.push(40);
    while(!pq.empty())
    {
        cout << pq.top() << " "; // 40 8 7
        pq.pop();
    }
    cout << endl;
    priority_queue <int> q;
    q.push(40);
    q.push(8);
    q.push(7);
    while(!q.empty())
    {
        cout << q.top() << " "; //40 8 7
        q.pop();
    }
    cout << endl;
}