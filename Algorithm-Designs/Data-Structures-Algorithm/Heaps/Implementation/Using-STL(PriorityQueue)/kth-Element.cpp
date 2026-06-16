#include <iostream>
#include <queue>
using namespace std;

//FINDING KTH MIN AND MAX ELEMENT IN HEAP USING STL

int main()
{
  int kth_Element=3;

  //MAX HEAP

  priority_queue<int> maxHeap;
  maxHeap.push(10);
  maxHeap.push(20);
  maxHeap.push(60);
  maxHeap.push(40);
  maxHeap.push(30);
  maxHeap.push(50);
  for(int i=0;i<kth_Element-1;i++)
  {
    maxHeap.pop();
  }
  cout << "Kth Max element is: " << maxHeap.top() << endl;

  //MIN HEAP

  priority_queue<int, vector<int>, greater<int>> minHeap;
  minHeap.push(10);
  minHeap.push(20);
  minHeap.push(60);
  minHeap.push(40);
  minHeap.push(30);
  minHeap.push(50);
  for(int i=0;i<kth_Element-1;i++)
  {
    minHeap.pop();
  }
  cout << "Kth Min element is: " << minHeap.top() << endl;
}