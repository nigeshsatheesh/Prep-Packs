#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;   
    vector<vector<int>> cost(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> cost[i][j];
            if(cost[i][j] < 0){
                cout << "Invalid input";
                return 0;
            }
        }
    }

    /*Create a list [0, 1, 2, ..., n-1] representing task IDs. The position in this list represents the robot, 
    and the value at that position represents the task assigned to that robot. 
    So initially: robot 0 → task 0, robot 1 → task 1, etc.*/

    vector<int> task;
    for(int i=0;i<n;i++){
        task.push_back(i);
    }
    int minCost = INT_MAX;
    while(true){
        int currentCost = 0;

        /*For each robot i, add the cost of assigning it to task[i] 
        (the task currently at position i in this permutation). This is the key difference 
        from TSP — here i is fixed as the robot index, and only task[i] changes across permutations.*/

        for(int i=0;i<task.size();i++){
            currentCost += cost[i][task[i]];
        }
        minCost = min(minCost,currentCost);
        if(!next_permutation(task.begin(),task.end())){
            break;
        }
    }
    cout << minCost;
    return 0;
}