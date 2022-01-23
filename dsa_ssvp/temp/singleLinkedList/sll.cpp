#include<iostream>
using namespace std;


class Node{

 public:
       int data;
       Node *next;   

       Node(int data){
           this->next=NULL;
           this->data=data;
       } 

  };

class SingleLinkedList{
public:
     

   Node* create(Node *root,int ele);
   void insert(Node *root,int ele);
   void display(Node *);
   void delItem(Node *);

};


Node* SingleLinkedList::create(Node *root,int ele){
      Node *temp;
       if(root!=NULL)insert(root,ele);
       
       else
           temp=new Node(ele);
       

       return temp;
}

void SingleLinkedList::insert(Node *root,int ele){
     int ch;
     cout<<"\nenter choice of insertion  \n1.lst \n2.at given pos \n 3.at first.";
     cin>>ch;

   switch(ch){
       case 1 : Node *temp=root; 
               while(temp->next!=NULL)temp=temp->next;
               temp->next=new Node(ele);
               break;
       case 2 : cout<<endl<<"enter position ";int pos; cin>>pos;
               Node *t=root->next,*p=root;
               for(int i=1;i<pos;i++,t=t->next,p=p->next);
               Node *tt=new Node (ele);
               p->next=tt;
               tt->next=p;
               break;
        case 3 : root=root->next; break;

      //  default : cout<<endl<<" enter valid choice"<<endl;
               
   }


}

void SingleLinkedList::display(Node *root){
     if(root==NULL){cout<<"empty\n"; return;}

     while(root!=NULL)
       cout<<root->data<<" | "<<"-->";
}

void SingleLinkedList::delItem(Node *root){
       if(root==NULL){cout<<" empty cant delete "<<endl; return;}

      cout<<"enter element to be delete "<<endl;
      int ele;
      cin>>ele;
      Node *temp=root;
      while(temp!=NULL){
          if(temp->data==ele){
             temp=temp->next;
             break;
          }
      }
}


int main(){
       
 SingleLinkedList *l1=new SingleLinkedList();

   int ch;
   cout<<"enter choice "<<endl;
   cin>>ch;

   switch (ch)
   {
   case 1:int ele;cout<<"enter element"<<endl;cin>>ele; Node *root=l1->create(root,ele);
     break;
   
   default:
     break;
   }


  return 0;
}