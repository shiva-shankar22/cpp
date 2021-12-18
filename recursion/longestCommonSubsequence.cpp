#include<iostream>
#include<vector>

using namespace std;

/*
int lcs(string str,string str2,int i,int j){

    if(str[i]=='\0'||str2[j]=='\0')return 0;

    if(str[i]==str2[j])
      return 1+lcs(str,str2,i-1,j-1);

    else 
          return max(lcs(str,str2,i-1,j),lcs(str,str2,i,j-1));
}

*/


int lcs(string str,string str2,int n,int m){
        if(n==0||m==0)return 0;

      if(str[m-1]==str[n-1])
         return 1+lcs(str,str2,n-1,m-1);
      else 
         return max(lcs(str,str2,n-1,m),lcs(str,str2,n,m-1));
}




int main(){

   
   cout<<endl<<lcs("abef","adef",3,3)<<endl;

    return 0;
}
