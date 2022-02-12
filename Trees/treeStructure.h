#include<iostream>
#define null nullptr
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


void insert(node *root,int data){
    if(root==nullptr)return ;

    if(root->x>data){
       if(root->left!=nullptr)
          insert(root->left,data);
       else 
           root->left=new node(data);
    }
    else{
          if(root->right!=null)
               insert(root->right,data);
        else 
           root->right=new node(data);
    }
}

void inorder(node *root){
    if(root==null)return ;
   
    inorder(root->left);
    cout<<root->x<<" ";
   
    inorder(root->right);
}


void preorder(node *root){
    if(root==null)return ;
   cout<<root->x<<" ";
   
    preorder(root->left);
    
    preorder(root->right);
}



void postorder(node *root){
    if(root==null)return ;
   
    postorder(root->left);
   
    postorder(root->right);
     cout<<root->x<<" ";
   

}


