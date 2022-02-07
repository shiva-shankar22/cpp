#include<iostream>
using namespace std;
struct node{
    int x;
   node(int k){
       x=k;
   }
};

int main(){
      
      node t=node(5);
      node tt=node(t.x+3);

      cout<<tt.x<<endl;
    return 0;
}