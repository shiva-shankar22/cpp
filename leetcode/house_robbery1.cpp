/*

 In this problem there are houses in a street and House robber has to rob these houses. But the problem is that he can’t rob more than one house successively i.e which are adjacent to each other. Given a list of non-negative integers representing the amount of money of each house, we have to find out the maximum amount of money he can get.

Example
nums = [1,2,3,1]
4
Explanation:House Robber

Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

nums = [2,7,9,3,1]
12
Explanation:


Rob house 1 (money = 2), rob house 3 (money = 9) and then 5th (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMaxProfit(vector<int> &ar,int i,int n,vector<int> &dp){
    if(i>=n)return 0;

  if(dp[i]!=-1)return dp[i];
       
    return dp[i]= max(findMaxProfit(ar,i+1,n,dp),ar[i]+findMaxProfit(ar,i+2,n,dp));

}

int main(){
    
    vector<int> v={2,1,1,2};
     int n=4;
    vector<int> dp(n+1,-1);
    cout<<endl<<findMaxProfit(v,0,4,dp)<<endl;
 
    return 0;
}