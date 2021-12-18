#include<iostream>
#include<vector>
using namespace std;

int lcs(string str,string str2,int n,int m){
     
     if(n==0||m==0)return 0;

     if(str[n-1]==str2[m-1])return 1+lcs(str,str2,n-1,m-1);

     else
         return max(lcs(str,str2,n-1,m),lcs(str,str2,n,m-1));
    
}


void minOperations(string str,string str2){
    int n=str.length(),m=str2.length();
     
    int l=lcs(str,str2,n,m);

  cout<<" deletions is :"<<n-l<<endl<<" insertions are :"<<m-l<<endl;  
}



int main(){

    minOperations("ssvp","sshh");return 0;

}