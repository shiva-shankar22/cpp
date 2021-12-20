/*

 You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

 

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.
 

Constraints:

2 <= cost.length <= 1000
0 <= cost[i] <= 999
Accepted
360,912
Submissions
637,350


*/

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int findMinCost(int ar[],int i,int n,vector<int> &dp){
    if(n==i)return 0;
    if(n<i)return 10000000;

    int cost=1000000;
if(dp[i]!=-1)return dp[i];
    cost=min(findMinCost(ar,i+1,n,dp)+ar[i],findMinCost(ar,i+2,n,dp)+ar[i]);

    return dp[i]=cost;
}

int main(){
/*
Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
  

Input: cost = [10,15,20]
Output: 15
*/
    int ar[]={1,100,1,1,1,100,1,1,100,1};
    int n=sizeof(ar)/sizeof(ar[0]);
    cout<<n<<endl;
   vector<int> dp(n+1,-1);
   vector<int> dp2(n+1,-1);
    int ct=min(findMinCost(ar,0,n,dp),findMinCost(ar,1,n,dp2));
    cout<<ct<<endl;



    return 0;
}