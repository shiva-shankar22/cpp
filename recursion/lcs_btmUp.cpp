#include<iostream>
#include<vector>
using namespace std;

int lcsbtm(string str,string str2,int i,int j){
     if(i==str.length()||j==str2.length())return 0;

     if(str[i]==str2[j])return 1+lcsbtm(str,str2,i+1,j+1);

     else 
       return max(lcsbtm(str,str2,i+1,j),lcsbtm(str,str2,i,j+1));
}

int main(){


     cout<<endl<<lcsbtm("abef","adef",0,0)<<endl;
    return 0;
}