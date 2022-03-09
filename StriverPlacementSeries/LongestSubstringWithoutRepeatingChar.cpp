
//navie
//Generate all Substrings and check for repeating characters
// TC : O(n^2)
//Sp  : O(n) for every substring 

//  better Solution
//  insert every character of string from start ans verfiy if it exists or not ?? 
// in the map 
//and use r-l +1 formula to evaluate maxi length

//   TC: O(2n)
//   SP : O(n) //for map  
/*

 map<char,int> mp;

    for(int i=0;i<n;i++){
        while(mp[str[i]])mp[str[l++]]=0;
           
          mp[str[i]]=1;
           maxi=max(maxi,r-l+1);
          r++;
         
    }
    cout<<maxi<<endl;

*/

//Efficient Solution 
/*
  just using some modifications we can optimize to 

  TC: O(N)
  SP : O(N)
  instead of storing characters store characters with indexes


*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string str;
    cin>>str;
    int n=str.length(),l=0,r=0,maxi=0;
    map<char,int> mp;

    for(int i=0;r<n;i++){

        if(mp.find(str[i])!=mp.end()){
           l=max(l,mp[str[i]]+1);
        }

        mp[str[i]]=r;
        maxi=max(maxi,r-l+1);
        r++;
    }
    cout<<maxi<<endl;
 return 0;
}