#include <iostream>
using namespace std;

//MERGE SORT

void merge(int arr[],int left,int right,int mid)
{
    int i=left,k=left,j=mid+1,c[100];
    while(i<=mid && j<=right)
        {
            if(arr[i]<arr[j])
            {
                c[k]=arr[i];
                i++;
                k++;
            }
            else
            {
                c[k]=arr[j];
                j++;
                k++;
            }
        }
    while(i<=mid)
        {
            c[k]=arr[i];
            i++;
            k++;
        }
    while(j<=right)
        {
            c[k]=arr[j];
            j++;
            k++;
        }
    for(int i=left;i<k;i++)
        {
            arr[i]=c[i];
        }
}
void mergesort(int arr[],int left, int right)
{
    if(left>=right)
    {
        return;
    }
    int mid=(right-left)/2+left;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,right,mid);
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
  mergesort(arr,0,n-1);
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