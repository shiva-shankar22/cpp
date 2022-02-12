#include<iostream>
#include<vector>
#include"treeStructure.h"
using namespace std;

int main(){
     
     int n;
     cin>>n;
    vector<int> arr(n);

    for(auto &it:arr)
       cin>>it;

    node *root=new node(arr[0]);

    for(int i=1;i<n;i++)
       insert(root,arr[i]);
    
   cout<<" Inorder Traverse is :"<<endl; 
    inorder(root);
    
    return 0;
}