#include<bits/stdc++.h>
using namespace std;

  bool checkDistances(string &s, vector<int>& d) {
        vector<pair<int,int>> ar(26);
        vector<int> flag(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            char it=s[i];
            if(flag[it-'a']==false)
                ar[it-'a']={i,-1};
            else{ 
               // ar[it='a']={ar[it-'a'].first,i};
                int val=d[it-'a'];
                int fs=ar[it-'a'].first,sc=i;
                if((i-fs-1)==val)
                    continue;
                else
                    return false;
            }
        }
        return true;
}

