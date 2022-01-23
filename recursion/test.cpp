#include<iostream>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int ar[]={1,2,2,34,5};
    int n=6;
     int s=0;
    accumulate(ar,ar+n,s);

    cout<<s<<endl;
}