#include "treeStructure.h"
#include <bits/stdc++.h>
using namespace std;

map<node*,int> mp;
bool isBalanced(node *root){
    if(root==nullptr)return true;
     
    int left =maxDepth(root->left),r=maxDepth(root->right);

    int val=left-r;
    mp[root]=max(left,r);
   if(val>=-1 && val<=1 && isBalanced(root->left) && isBalanced(root->right))return true;
   else return false;  

}

int isBalanced(node *root,bool &fg){
    
}