#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        this->data=value;
        this->next=nullptr;
    }
};
void  insertathead(int value,node* &head,node* &tail){
    if(head==nullptr and tail==nullptr){
    node* newnode=new node(value);
    head=newnode;
    tail=newnode;
}
else{
//ek new node create kra hamne iss line se
    node * newnode=new node(value);
//uss newnode ka next ko head pe rakh dia
    newnode->next=head;
//or head ko hamne newnode par rakh dia
    head=newnode;
}
}
void insertattail(int value,node*&head,node* &tail){
    if(head==nullptr and tail==nullptr){
        node* newnode=new node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        node* newnode=new node(value);
        tail->next=newnode;
        newnode->next=nullptr;
        tail=newnode;
    }
}
node* insertatposition(int position,int value,node* &head,node* &tail){
    int length=getlength(head);
    if(position==1){
        insertathead(value,head,tail);
    }
    else if(position==length+1){
        insertattail(value,head,tail);
    }
    else{
        node* temp=head;
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        node* newnode= new node(value);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;

}
int getlength(node*head){
    int length=0;
    node*temp=head;
    while(temp!=nullptr){
        length++;
        temp=temp->next;
    }
    return length;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletenode(int position,node* &head,node* &tail){
   if(head==nullptr and tail== nullptr){
    return;
   }
   else if(head==tail){
    node*temp=head;
    head=nullptr;
    tail=nullptr;
    delete temp;
   }
   else{
     if(position==1){
    node*temp=head;
    head=temp->next;
   temp->next=nullptr;
   delete temp;
   }
else{
    node*temp=head;
   for(int i=0;i<position-2;i++){
    temp=temp->next;
   }
   node*nodetodelete=temp->next;
   temp->next=nodetodelete->next;
    nodetodelete->next=nullptr;
    delete nodetodelete;
}
}
}
int main(){

}