#include <iostream>
using namespace std;

//SELECTION SORTING

int main() 
{
  int n=5;
  int arr[n]={4,3,5,1,2};
  for (int i=0;i<n-1;i++)
  {
    int minIndex=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[minIndex]>arr[j])
      {
        minIndex=j;
      }
    }
    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
  }
  for(int i=0;i<n;i++)
  {
    cout << arr[i] << " "; 
  }
}