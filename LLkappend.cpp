#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        
        node(int val){
            data=val;
            next=NULL;
        }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val){
    node *n=new node(val);
    if(head==NULL){
        head =n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* kappend(node* head, int key){
    node* temp=head;
    node* newhead;
    int count=0;
    while(temp->next){
        temp=temp->next;
        count++;
    }
    if(count<key){
        return head;
    }
    count=count-key;
    temp=head;
    while(count--){
        temp=temp->next;
    }
    newhead=temp->next;
    temp->next=NULL;
    temp=newhead;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=head;
    return newhead;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    node* newhead=kappend(head,8);
    display(newhead);
    return 0;
}