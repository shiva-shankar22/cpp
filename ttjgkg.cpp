#include<bits/stdc++.h>
using namespace std;
class CustomStack {
public:
    int *ar,*inc,top=-1,maxi;
    CustomStack(int maxSize) {
        ar=new int[maxSize];
        inc=new int[maxSize];
        maxi=maxSize;
        for(int i=0;i<maxSize;i++)inc[i]=0;
       cout<<maxi<<endl; 
    }
    
    void push(int x) {
        if(++top<=maxi-1)
          ar[top]=x;
       
    }
    
    int pop() {
        if(top<0)return -1;
        
        int val=inc[top]+ar[top];
        
        if(top-1>=0)
            inc[top-1]+=inc[top];
        top--;
      
        return val;
    }
    
    void increment(int k, int val) {
        inc[k-1]+=val;
    }
};

int main(){
    CustomStack cs(3);
    

    cs.push(1);
    cs.push(2);
    cout<<cs.pop()<<endl;
    cs.push(2);
    cs.push(3);
    cs.push(4);
    cs.increment(5,100);
    cs.increment(2,100);
    cout<<cs.pop()<<endl;
    cout<<cs.pop()<<endl;
    cout<<cs.pop()<<endl;
    cout<<cs.pop()<<endl;
}
