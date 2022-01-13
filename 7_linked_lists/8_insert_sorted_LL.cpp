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

Node* insert_in_sorted_LL(Node *p, int val){

    Node *t;
    t = new Node;
    t->data = val;
    t->next = NULL;

    while(p->next->data< val){
        p=p->next;
    }

    t->next = p->next;
    p->next =  t;
    
    return p;

}




int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);

    int val;
    cout<<"Enter the value to be inserted - ";
    cin>>val;

    insert_in_sorted_LL(first, val);
    display_ll(first);
    
    return 0;
}