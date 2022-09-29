#include<bits/stdc++.h>
using namespace std;

int f(int a,int b){
   cout<<"re"<<endl;
     if(( a>5) || (3> b) && a<b){
        b=a+3;
        a=(b+3)+a;
        a=b+1;
        return 1+f(a+1,b+2)+2;
     }
     return b;
}

int ff(int a,int b){
     
     if((2-a)>(a-b) && 4>b){
      a=3+a+a;
      b+=2;
      return ff(a,b);
     }
     return b+1;
}

int main(){ 
   
   int p=0,q=2,r=5;

   for(r=3;r<=5;r++){
       if((q^p^r) < (p+q+r))break;
       p=(r+r)+r;
       q+=r;
   }
    cout<<p+q;
}