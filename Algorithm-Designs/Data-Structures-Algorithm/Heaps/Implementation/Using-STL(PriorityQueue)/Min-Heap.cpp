#include <iostream>
#include <queue>
using namespace std;

//MIN HEAP IMPLEMENTATION USING STL

int main()
{
  priority_queue<int, vector<int>, greater<int>> minHeap;
  minHeap.push(10);
  minHeap.push(20);
  minHeap.push(60);
  minHeap.push(40);
  minHeap.push(30);
  minHeap.push(50);
  while(!minHeap.empty())
  {
    cout << minHeap.top() << " ";
    minHeap.pop();
  }
}