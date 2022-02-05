#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

void InsertAtTail(Node* &head, int val){
    Node* n=new Node(val);
    Node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deleteAthead(Node* &head){
    Node* todelete = head;
    head=head->next;

    delete todelete;

}

void deletion(Node* &head, int key){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAthead(head);
        return;
    }

    Node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    Node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;

}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
Node* reverse(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;
    while(currptr){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

Node* reverseRecursive(Node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

Node* reversek(Node* &head,int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;
    int count=0;

    while(currptr && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}

int main() {
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    insertAtHead(head,4);
    InsertAtTail(head,5);
    display(head);
    //deletion(head,3);
    Node* newhead = reversek(head,3);
    display(newhead);
    //cout<<search(head,2);
    return 0;  
}