#include <iostream>
using namespace std;

//QUICK SORTING

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;
}

void quickSort(int arr[],int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int pivot=arr[left];
    int i=left+1;
    int j=right;
    while(i<=j)
    {
        while(arr[i]<=pivot && i<=right)
        {
            i++;
        }
        while(arr[j]>=pivot && j>=left)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr,i,j);
            i++;
            j--;
        }
    }
    swap(arr,left,j);
    quickSort(arr,left,j-1);
    quickSort(arr,j+1,right);  
}

int main() 
{
  int n;
  cin >> n;
  int arr[n];
  for (int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  quickSort(arr,0,n-1);
  for (int i=0;i<n;i++)
  {
    cout << arr[i];
    if(i<n-1)
    {
      cout << " ";
    }
  }
    return 0;
}