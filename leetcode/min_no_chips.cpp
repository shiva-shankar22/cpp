#include<iostream>
#include<vector>
using namespace std;


int findMin(vector<int> v){
    int odd=0,ev=0;

  for(int i=0;i<v.size();i++)
       if(i&2)
          odd++;
        else ev++;

    return min(odd,ev);
}

int main(){

   int n;
   cin>>n;
   vector<int> v;

   while(n--){
       int val;
       cin>>val;
       v.push_back(val);
   }

   cout<<"min is"<<findMin(v)<<endl;

    return 0;
}