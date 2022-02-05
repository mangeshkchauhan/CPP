#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* previous;

    node(int val){
        data=val;
        next=NULL;
        previous=NULL;
    }

};
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    head->previous=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;

}

void deleteAthead(node* &head){
    node* todelete=head;
    head=head->next;
    head->previous=NULL;
    delete todelete;
}

void deletion(node* &head,int pos){
    if(head==NULL){
        return;
    }
    if(pos==1){
        deleteAthead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->previous->next=temp->next;
    if(temp->next){
        temp->next->previous=temp->previous;
    }
    delete temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    deleteAthead(head);
    display(head);
    return 0;
}