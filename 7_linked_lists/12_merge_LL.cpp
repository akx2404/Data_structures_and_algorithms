#include<stdio.h>
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL, *second=NULL, *third=NULL;


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

void create_ll_2(int A[], int n){
    int i;
    struct Node *t, *last;

    second = new Node;

    second->data = A[0];
    second->next = NULL;
    last = second;

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

void merge_LL(Node *p, Node *q){
    struct Node *last;
    if (p->data < q->data){
        third = last = p;
        p=p->next;
        third->next = NULL;
    }

    else{
        third = last = q;
        q=q->next;
        third->next = NULL; 
    }

    while(p and q){
        if(p->data < q->data){
            last->next = p;
            last =p;
            p=p->next;
            last->next=NULL;
        }

        else{
            last->next = q;
            last =q;
            q=q->next;
            last->next=NULL;
        }
        
        
    }

    if(p)last->next=p;
    if(q)last->next=q;
}


int main(){
    int A[] = {3,5,7,9,10};
    int B[] = {1,2,4,6,8};
    create_ll_1(A, 5);
    create_ll_2(B, 5);

    cout<<"first ll - "<<endl;
    display_ll(first);
    cout<<endl;
    cout<<"second ll - "<<endl;
    display_ll(second);
    cout<<endl;
    cout<<"third ll (merged) - "<<endl;
    merge_LL(first, second);
    display_ll(third); 




    
    return 0;
}