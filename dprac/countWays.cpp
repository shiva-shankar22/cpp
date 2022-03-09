#include<iostream>
using namespace std;


int solve(long long val){
    if(val==0)return 0;
    if(val<0)return 9999999;
    
    int ans=0;
    
    if(val-1>=0){
       int temp=solve(val-1);
        if(temp!=9999999)
          ans=1+solve(val-1);
    }
     if(val-2>=0){
      int  temp=solve(val-2);
        if(temp!=9999999)
          ans+=1+solve(val-2);
    }
    return ans;
}

int countDistinctWayToClimbStair(long long val)
{
    //  Write your code here.
    return solve(val);
}
int main(){
    int n=3;
     cout<<countDistinctWayToClimbStair(3);
}