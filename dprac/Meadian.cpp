#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'runningMedian' function below.
 *
 * The function is expected to return a DOUBLE_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<double> runningMedian(vector<int> a) {
   set<int> st;
   
   int n=a.size();
   vector<double> ans;
   ans.push_back(a[0]);
   st.insert(a[0]);
   int j=0;
  
   for(int i=1;i<n;i++){
       st.insert(a[i]);
       if(i&2){
          
       }
       
   }
   return ans;  
}


int main(){

    int n;
    //cin>>n;
    vector<int> arr={2,24,5,6,7};;
    for(auto &it :arr);
    //  cin>>it;
set<int> st(arr.begin(),arr.end());


auto it=st.begin()+2;
cout<<*it;   

// vector<double> ans=runningMedian(arr);
   

  // for(auto &it :ans)
    //   cout<<it<<endl;
}
