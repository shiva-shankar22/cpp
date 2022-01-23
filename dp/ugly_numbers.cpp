#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
   
   unsigned int multiple_2=2;

   unsigned int multiple_5=5;
   
   unsigned int multiple_3=3;
   unsigned int next_ugly=1;
   int i2=0,i3=0,i5=0;

   vector<int> ugly(n+1);

   ugly[0]=1;

   for(int i=1;i<n;i++){
       next_ugly= min(multiple_3,min(multiple_2,multiple_5));
       ugly[i]=next_ugly;

       if(next_ugly==multiple_2){
           i2++;
           multiple_2=ugly[i2]*2;
       }


       if(next_ugly==multiple_3){
           i3++;
           multiple_3=ugly[i3]*3;
       }


       if(next_ugly==multiple_5){
           i5++;
           multiple_5=ugly[i5]*5;
       }

   }

   cout<<next_ugly<<endl;
  

  return 0;
}