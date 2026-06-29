#include <bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    cin >> n;
    vector<vector<int>> cost(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> cost[i][j];
            if(cost[i][j] < 0){
                cout << "Invalid input";
                return 0;
            }
        }
    }

    //Create a list of all cities except city 0 — since 0 is always the fixed starting and ending point. 
    //This list will be permuted to test different visiting orders.

    vector<int> city;
    for(int i=1;i<n;i++){
        city.push_back(i);
    }

    //Initialize the minimum cost as the largest possible integer, so any real route's cost will be smaller and update it.

    int minCost = INT_MAX;

    //Loop forever until we've checked all permutations (we break out manually).

    while(true){

        //Each route starts at city 0 with cost 0 so far.

        int currentCity = 0;
        int currentCost = 0;

        for(int i=0;i<city.size();i++){

            //Walk through the current permutation of cities one by one:
            //Add the cost of moving from currentCity to the next city city[i].
            //Update currentCity to this new city, so the next iteration calculates cost from here.

            currentCost += cost[currentCity][city[i]];
            currentCity = city[i];
        }

        //After visiting all cities in this order, add the cost to return back to city 0 (completing the loop/tour).

        currentCost += cost[currentCity][0];

        //Compare this route's total cost with the best one found so far, and keep the smaller value.

        minCost = min(minCost,currentCost);

        //next_permutation rearranges city into the next lexicographic order and returns true if it succeeded. 
        //If there are no more permutations left (we've tried them all), it returns false, and we exit the loop.

        if(!(next_permutation(city.begin(),city.end()))){
            break;
        }
    }
    cout << minCost;
    return 0;
}