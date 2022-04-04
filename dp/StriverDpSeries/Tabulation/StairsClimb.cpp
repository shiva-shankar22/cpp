#include<vector>
using namespace std;
#define MOD 1000000007

int solve(long long val){
if(val==1 || val==2)return val;
  vector<long long> dp(val+1);
   
  dp[0]=0;
  
  dp[1]=1;

  dp[2]=2;

  for(long long i=3;i<=val;i++){

    dp[i]=(dp[i-1]+dp[i-2])%MOD;
 }

return dp[val];
}


int countDistinctWayToClimbStair(long long nStairs)
{

    int totalWay = solve( nStairs);

    return totalWay;
}