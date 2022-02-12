#include<iostream>
#include<queue>
#define null NULL
using namespace std;

class node{
 public:
    char data;
    node *left=null;
    node *right=null;
  
    node (){}

    node(char ele){
        data=ele;
    }
};


node* create(char ele){
    if(ele=='N')
       return null;
    else {
        node *root= new node(ele);
        return root;
    }
       
}


node* levelOrderCreation(string str){

     int i=1; int n=str.length();
    queue<node*> q;
    node *root=new node(str[0]);
    q.push(root);

    while(!q.empty()){
        node* top=q.front();

       
        if(i<n ){ 
         top->left=create(str[i++]);
          if(top->left!=null)
            q.push(top->left);
             
        }
        if(i<n){ 
         top->right=create(str[i++]);
          if(top->right!=null)
            q.push(top->right);
            
        }

        if(i>=n)while(!q.empty())q.pop();

       if(!q.empty()) 
        q.pop();
    }
    
    return root;
}

void inorder(node *root){
    if(root==null)return;
     
     
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){

    string str="123N45NN6";
    

    node *root;
 int i=0;
    
 root=  levelOrderCreation(str);


cout<<"inorder :"<<endl;
 inorder(root);

   return 0;

}