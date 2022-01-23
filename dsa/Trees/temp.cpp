#include <bits/stdc++.h>
using namespace std;


class node
{
    public:
    char data;
    node* left;
    node* right;
    node(char val){
        data=val;
        left=NULL;
        right=NULL;
        
    }
};
 
int maxDepth(node* node)
{
    if (node == NULL)
        return 0;
    
    return max(maxDepth(node->left)+1,maxDepth(node->right)+1);
    
}
 


void printBFS(node *root){
    queue<node*> q;
     
     q.push(root);
     while(!q.empty()){
         node *temp= q.front();
         
         cout<<temp->data<<" ";
         q.pop();
         if(temp->left)q.push(temp->left);
         if(temp->right)q.push(temp->right);

     }
}

      
int main()
{
    
   string str="1 2 3 N N";
 // cin.getline(str,1000);
    
    
    int n=str.length();

    int i=1;
    queue<node*> q;
    
    node *root= new node(str[0]);
    
    while(!q.empty()){ if(str[i]==' ')continue;
        node *temp=q.front();
        q.pop();
    
       if(i<n){
           if (str[i]=='N')
                temp->left=NULL;
           else
           temp->left=new node(str[i++]);
       } 
       
       if(i<n){
           if(str[i]=='N')
           temp->right=NULL;
               else
                    temp->right=new node(str[i]);
           
       } 
        
    }
    
    printBFS(root);
    
    //cout<<maxDepth(root)<<endl;
    
    
    return 0;
}
 