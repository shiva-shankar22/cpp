#include<iostream>

using namespace std;

class stack{
   
  public:
   int top=-1;
    char* stk;
     stack(int n){
        stk=new char[n];
    }

  void push( char c){
      stk[++top]=c;
  }
  
  void pop(){
         top--;
  }
  char topf(){
      return stk[top];
  }

  bool empty(){
      return (top==-1)?true : false;
  }

};

int main(){
      
      string str="(()){{()}[]}";

     stack st(str.length());
    

     for(auto i:str)
         if(st.empty()&& (i==']'||i=='}'||i==')' )){
             cout<<"Not balanced"<<endl;
             return 0;
         }
            //st.push(i);
         else if((i=='['||i=='{'||i=='(' ))
              st.push(i);
         else  if((i==']'||i=='}'||i==')' )){ 
               char ch= st.topf();
               if((i==']'&&ch=='[') ||(i=='}'&&ch=='{')||(i==')'&&ch=='('))
                 st.pop();
         }
     if(st.empty())
     cout<<"balanced"<<endl;
     else 
       cout<<"not balanced";

    return 0;
}