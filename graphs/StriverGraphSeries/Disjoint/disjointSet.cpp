#include<bits/stdc++.h>
using namespace std;

int n=10;
int par[10],ar[10];

int findParent(int i){
    if(par[i]==i)return i;

    return par[i]=findParent(par[i]);
}

void unionNode(int i,int j){
    par[i]=findParent(j);
}


int main(){

}