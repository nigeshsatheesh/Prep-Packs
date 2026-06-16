#include <iostream>
using namespace std;

//BINARY SEARCH (SEARCHING FOR SORTED ARRAY)

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target=7;
    int left=0,right=10-1;
    while(left<=right)
    {
        int mid=((right-left)/2)+left;
        if(target<arr[mid])
        {
            right=mid-1;
        }
        else if(target>arr[mid])
        {
            left=mid+1;
        }
        else
        {
            cout << "Found at: " << mid;
            return 0;
        }
    }
    cout << "Not Found"; 
}