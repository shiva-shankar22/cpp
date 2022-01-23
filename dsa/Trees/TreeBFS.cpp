#include<iostream>
#include<queue>
#include "treeStructure.h"
#include<vector>

using namespace std;



void printBFS(node *root){
    queue<node*> q;
     
     q.push(root);
     while(!q.empty()){
         node *temp= q.front();
         
         cout<<temp->val<<" ";
         q.pop();
         if(temp->left)q.push(temp->left);
         if(temp->right)q.push(temp->right);

     }
}



int main(){

    node *root=NULL;

    int n=6;
    //cin>>n;
    int x[]={10,11,8,9,7,12};
            

    for(int i=0;i<n;i++){
       
            
        if(i==0){
           root=create(root,x[i]);
        }
        else
        insert(root,x[i]);
    }
       
       printBFS(root);
   return 0;
}