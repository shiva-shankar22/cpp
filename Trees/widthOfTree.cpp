#include<bits/stdc++.h>
using namespace std;

struct node{
    int x;
    node *left=nullptr;
    node *right=nullptr;

    node(){}
    node(int ele){
        x=ele;
    }
};


void getIndexed(node *root){
    queue<node*> que;

    que.push(root);
     root->x=0;
    for(int i=0;!que.empty();que.pop()){
         
         node *temp=que.front();
          ++i;
         if(temp->left){
             temp->left->x=i;
         }
          ++i;
         if(temp->right){
             temp->right->x=i;
         que.push(temp->right);
         }
        
        
    }
    
}

void levelOrder(node *root ){
    if(!root)return ;

    queue<node *> q;
    q.push(root);

   while(!q.empty()){
       node *temp=q.front();
         
       cout<<temp->x<<" ";q.pop();
       if(temp->left)q.push(temp->left);
       if(temp->right)q.push(temp->right);
   }
}
void insert(node *root,int data){
    if(root==nullptr)return ;

    if(root->x>data){
       if(root->left!=nullptr)
          insert(root->left,data);
       else 
           root->left=new node(data);
    }
    else{
          if(root->right!=nullptr)
               insert(root->right,data);
        else 
           root->right=new node(data);
    }
}
int main(){
        
        int n;
        cin>>n;node *root;
        for(int i=0;i<n;i++){
            int x;cin>>x; 
            if(i==0)
               root=new node(x);
          else insert(root,x);
        }
        levelOrder(root);cout<<endl;
        getIndexed(root);
        levelOrder(root);
}