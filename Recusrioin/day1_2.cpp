#include<bits/stdc++.h>
using namespace std;

//print all subsets
/*void subsetSum(int ar[],int i,int n,vector<int> &v){
     if(i==n){
         for(auto it:v)
           cout<<it<<" ";
           cout<<endl;
           return ;
     }
      subsetSum(ar,i+1,n,v);
    
    v.push_back(ar[i]);
     subsetSum(ar,i+1,n,v);
    v.pop_back();
   
}
*/

//check for subset Sum
/*bool isSubset(int ar[],int sum,int i,int n){
    if(i==n)
      if(sum==0)
        return true;
      else return false;
    return ( isSubset(ar,sum-ar[i],i+1,n)|| isSubset(ar,sum,i+1,n) ) ;

}
*/
//Minimum coins to make value

/*int minCoins(int ar[],int money,int n){
    if(money==0)return 0;

    int res=INT_MAX;
  
    for(int i=0;i<n;i++){
       
        if(money<=ar[i]){
          int sub_res=minCoins(ar,money-ar[i],n);
          
           if(sub_res!=INT_MAX && sub_res+1<res)
             res=sub_res+1;

        }

    }
    return res;
}
*/

/*int countSubsets(int ar[],int sum,int i,int n){
    if(i==0 and sum==0)return 0;
     if(i==n){
        if(sum==0)return 1;
        else return 0;
     }
      
    return countSubsets(ar,sum-ar[i],i+1,n)+countSubsets(ar,sum,i+1,n);

}*/

//subsets with repeated elemets

/*
vector<vector<int>> vv;
void printSubsets(int ar[],int sum,int n,int i,vector<int> &v){
         if(sum==0){
           
             vv.push_back(v);
         }

         if(n==i)return;

         if(sum-ar[i]>=0){ 
           v.push_back(ar[i]);
            printSubsets(ar,sum-ar[i],n,i,v);
            v.pop_back();
         }

         printSubsets(ar,sum,n,i+1,v);
         
}
*/

// print all subsets whose sum is divisible by k

/*
void printSubsets(int ar[],int i,int n,int k,int sum,vector<int> &v){
           if(sum%k==0){
             for(auto it : v)
               cout<<it<<" ";
               cout<<endl;
           }

           if(n==i)return ;
          v.push_back(ar[i]);  
          printSubsets(ar,i+1,n,k,sum+ar[i],v);
          v.pop_back();

          printSubsets(ar,i+1,n,k,sum,v);


                     
}
*/

int cntSubsets(int ar[],int i,int n,int sum){
  if(sum==0)return 1;

  if(n==i)return 0;
    int l=0,r=0;
    if(sum-ar[i]>=0){
     l= cntSubsets(ar,i,n,sum-ar[i]);
    }
   
    r=cntSubsets(ar,i+1,n,sum);
    return l+r;

}

int main(){

     int ar[]={1,2,3,4,5};
    vector<int> v;
  //   subsetSum(ar,0,sizeof(ar)/sizeof(ar[0]),v);

  /* if(isSubset(ar,8,0,3))
     cout<<"Exists";
   else cout<<"Dont Exists";
*/

//cout<<countSubsets(ar,8,0,5);

//printSubsets(ar,0,5,2,0,v);

   //set<vector<int>> st(vv.begin(),vv.end());
    
    cout<<cntSubsets(ar,0,5,4)<<endl;

   /*for(auto it: st){ 
      for(auto i: it)
         cout<<i<<" ";
         cout<<endl;
   }*/


    return 0;
}