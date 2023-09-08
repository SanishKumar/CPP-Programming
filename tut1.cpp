// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


// Another axample
// Input: N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].

#include <iostream>
#include <vector>
using namespace std;

int countWaysToClimbStairs(int N){
    if (N==1){
        return 1;
    }if (N==2){
        return 2;
    }
    vector<int> dp(N + 1);
    dp[1]=1;
    dp[2]=2;

    for (int i = 3; i<=N; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[N];
}

int main(){
    int N;

    cout << "Enter the number of stairs: ";
    cin >> N;

    int ways = countWaysToClimbStairs(N); 

    cout << "Number of distinct ways to climb " << N << " stairs: " << ways << endl;

    return 0;
}