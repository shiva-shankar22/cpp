#include<iostream>
#define min(x,y,z) min(x,min(y,z))
using namespace std;



int  editDistance(string str,string str2,int n,int m){

   if(n==0)return m;

   if(m==0)return n;

   if(str[n-1]==str2[m-1])return editDistance(str,str2,n-1,m-1);

   else return 1 + min(editDistance(str,str2,n-1,m-1),editDistance(str,str2,n,m-1),editDistance(str,str2,n-1,m));   


}

int main(){
    string str,str2;
    cin>>str>>str2;

    int n=str.length(),m=str2.length();

    cout<<editDistance(str,str2,n,m)<<endl;
}