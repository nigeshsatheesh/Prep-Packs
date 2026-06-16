#include <iostream>
using namespace std;

//LINEAR SEARCH(SEARCHING FOR UNSORTED ARRAY)

int main()
{
    int arr[10]={2,4,1,3,7,9,5,6,8,10};
    int target=7;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==target)
        {
            cout << "Found at: " << i;
            return 0;
        }
    }
    cout << "Not Found";
}