#include<iostream>
using namespace std;

int main(){
    
   int *ar=new int[55];

   for(int i=0;i<5;i++)
      cin>>ar[i];

   for(int i=0;i<55;i++)
      cout<<ar[i]<<" ";
    cout<<endl;

    return 0;
}