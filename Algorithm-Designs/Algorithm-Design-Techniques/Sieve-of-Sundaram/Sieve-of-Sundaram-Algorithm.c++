#include <bits/stdc++.h>
using namespace std;

vector<int> sosPrime(int n){
    bool arr[n];
    vector<int> nums;
    for (int i=0;i<n;i++){
        arr[i] = true;
    }
    arr[0] = false;
    for (int i = 1; i < n; i++){
        for (int j = i; i + j + 2*i*j < n ; j++){
            arr[i + j + 2*i*j] = false;
        }
    }
    nums.push_back(2);
    for (int i=1; i<n ;i++){
        if (arr[i] == true && 2*i+ 1 < n){
            nums.push_back(2*i + 1);
        }
    }
    return nums;
}