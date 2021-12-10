#include<bits/stdc++.h>
using namespace std;


void fun(int x)
{
    if(x > 0)
    {
        fun(--x);
        cout << x <<" ";
        fun(--x);
    }
}

int main(){

pair<int,int>p;

//p.first=5;

cout<<p.first<<" "<<p.second;

    return 0;
}

