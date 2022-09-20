#include<bits/stdc++.h>
using namespace std;

int findMod(string str){
      int m=str.size();
      int mod=0;

      for(int i=0;i<m;i++)
           mod+=str[i]-'a' *pow(10,m-i+1);
 return mod;
}



