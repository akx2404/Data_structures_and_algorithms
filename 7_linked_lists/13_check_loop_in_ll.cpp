#include<stdio.h>
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


void create_ll_1(int A[], int n){
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

bool check_loop(struct Node *f){
    struct Node *p,*q;
    p=q=f;

    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }
    while(p and q and p!=q);

    if (p==q){
        return true;
    }

    else{
        return false;
    }
}


int main(){
    int A[] = {3,5,7,9,10};
    create_ll_1(A, 5);

    struct Node *t1, *t2;
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next=t1;

    cout<<check_loop(first);


    
    return 0;
}