#include<iostream>
using namespace std;


void print(string str,int i,int j){
    if(i>=j)return;
      cout<<str[i]<<" ";
      cout<<str[j-1]<<" ";
      
    for(int k=i+1;k<j;k++){
        print(str,i,k);
        print(str,k+1,j);
        
        
    }
    cout<<endl;

}


int main(){
     
     print("ABCD",0,4);

    return 0;
}