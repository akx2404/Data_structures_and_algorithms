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

    for(i=1; i<n-1; i++){
        t = new Node;
        t->data = A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

    t = new Node;
    t->data = A[n-1];
    t->next=first;
    last->next=t;
    last=t;


}


void display_ll(struct Node *p){

    int a = p->data;

    while(p->data!= a){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}



int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);
    
    return 0;
}