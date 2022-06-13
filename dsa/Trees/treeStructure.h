#include<iostream>

struct node{
   node *left,*right;
   int val;
   node(){}

   node(int value){
       val=value;
       left=NULL;
       right=NULL;
   }

};

node* create(node *root,int val){

    root =new node(val);
   return root;
}

int maxDepth(node *root){

    if(root==nullptr)return 0;

    int val= max(maxDepth(root->left),maxDepth(root->right));

    return val+1;
}

void insert(node *root,int value){
    if(root==NULL) 
        return ;

     if(root->val> value){
         if(root->left!=NULL)
             insert(root->left,value); 
         else {
            node *temp=new node(value);  
            root->left=temp;
         }
     }   

     else if(root->val< value){
         if(root->right!=NULL)
            insert(root->right,value);
         else {
             node *temp=new node(value);
             root->right=temp;
         } 
             
     }
       
}