#include<iostream>
#include<limits.h>
using namespace std;

int rodC(int ar[],int l,int n){
//    if(l<=0)return 0 ;
 if(l==1)return ar[l-1];
    int q=INT_MIN;
    
    for(int i=1;i<=n;i++)
        if(l-i>=0){
            q=max(q,ar[i-1]+rodC(ar,l-i,n));
        }
    

    return q;
}

int main(){
    
    int ar[]={2,3,4,5,10};
    
    cout<<rodC(ar,5,5)<<endl;


    return 0;
}