#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


void create_ll(int A[], int n){
    int i;
    struct Node *t, *last;

    first = new Node;

    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}


void display_ll(struct Node *p){
    while(p!= NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

Node* delete_node(Node *p, int val){

    if(first->data == val){
        Node *t = first;
        first = first->next;
        delete t;

        return p;
    }

    else{
        while(p->next->data != val){
            p=p->next;
        }

        Node *q = p->next;
        p->next = p->next->next;
        delete q;
        
        return p;
    }

    

}




int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);

    int val;
    cout<<"Enter the value to be deleted - ";
    cin>>val;

    delete_node(first, val);
    display_ll(first);
    
    return 0;
}