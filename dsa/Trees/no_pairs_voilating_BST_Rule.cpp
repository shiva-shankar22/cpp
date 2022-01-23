#include<iostream>
#include "treeStructure.h"
using namespace std;


int noOfPairs(node *root){
    if(root==NULL)return 0;

    if( (root->val < root->left->val ) || (root->val > root->right->val) )
        return 1+noOfPairs(root->left)+noOfPairs(root->right);

    else return noOfPairs(root->left)+noOfPairs(root->right);
}

int main(){

}