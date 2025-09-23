#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;                                                                
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

int main(){
    node * first;
    first=new node(10);
}