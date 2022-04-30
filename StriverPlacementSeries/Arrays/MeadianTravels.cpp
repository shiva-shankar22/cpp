#include<bits/stdc++.h>
using namespace std;

void balanceQueues(priority_queue<int> &maxHeap,priority_queue<int,vector<int>,greater<int>> &minHeap){

    int mH=maxHeap.size(),minHeapSize=minHeap.size();

    if(abs(mH-minHeapSize)>1){

        if(mH > minHeapSize){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
          
    }

}

float findMedian(int el,priority_queue<int> &maxHeap,priority_queue<int,vector<int>,greater<int>> &minHeap){
      if(maxHeap.empty() and minHeap.empty()){
          maxHeap.push(el);
          return el;
      }
      else if(minHeap.empty() && !maxHeap.empty()){
            minHeap.push(el);
      }
      
      else {
          if(el >minHeap.top())minHeap.push(el);
          else maxHeap.push(el);
      }

      balanceQueues(maxHeap,minHeap);

      if((maxHeap.size()+minHeap.size())%2==0) return ((maxHeap.top()+minHeap.top())/2);
      
      else 
        return ((float) maxHeap.size()>minHeap.size() ? maxHeap.top() : minHeap.top());

}


int main(){


    int ar[]={2,4,3,1};

    priority_queue<int,vector<int>,greater<int>> pqmin;
    
    priority_queue<int> pqmax;
    
    
    for(auto it: ar){ 
      float val=findMedian(it,pqmax,pqmin);
      cout
    }

}