#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=idx;i<arr.size();i++){
        swap(arr[i],arr[idx]);
        fun(arr,ds,ans,idx+1);
        swap(arr[idx],arr[i]);
    }
}

void permute(vector<int> arr){
    vector<int> ds;
    vector<vector<int>> ans;
    fun(arr,ds,ans,0);

    for(auto &it: ans){
        for(auto &i:it){
            cout<<i<<" ";
            cout<<endl;
        }
    }
}

int main(){
    vector<int> arr={1,2,3};

    permute(arr);
    return 0;
}