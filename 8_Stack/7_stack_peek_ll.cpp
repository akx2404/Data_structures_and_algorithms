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


int peek_in_stack(int pos){

    int i=0;

    Node *p = first;

    for(i=0; p!=NULL and i<pos-1; i++){
        p=p->next;
    }

    if(p!=NULL){
        return p->data;
    }
    else{
        return -1;
    }
    

}


int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);
    cout<<"Enter position to check - ";
    int n;
    cin>>n;
    cout<<peek_in_stack(n);
    return 0;
}