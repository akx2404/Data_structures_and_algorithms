#include<stdio.h>
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
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


Node* reverse_links(Node *p){
    Node *q,*r;

    p=first;
    q=NULL;
    r=NULL;

    while(p!= NULL){
        r=q;
        q=p;
        p=p->next;

        q->next = r;

    }
    first = q;

    return p;

}




int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);

    cout<<" - reversed - "<<endl;
    reverse_links(first);
    display_ll(first);
    
    return 0;
}