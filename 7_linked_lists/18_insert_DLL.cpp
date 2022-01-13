#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;


void create_dll(int A[], int n){
    int i;
    struct Node *t, *last;

    first = new Node;

    first->data = A[0];
    first->next = NULL;
    first->prev = NULL;
    last = first;

    for(i=1; i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }

}


void display_dll(struct Node *p)
{
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }

    cout<<endl;
}

void insert_dll(Node *p, int val, int ind){
    Node *t;
    t= new Node;
    t->data = val;
    t->prev = t->next = NULL;

    if (ind == 0){

        t->next = first;
        first->prev = t;
        first = t;

    }

    else{

        for(int i=0; i<ind-1; i++){
            p=p->next;
        }

        t->next = p->next;
        t->prev = p;

        if (p->next){
            p->next->prev = t;
        }
        
        p->next =t;

    }

}


int main(){
    int A[] = {3,5,7,10,15};
    create_dll(A, 5);
    display_dll(first);

    int val, ind;
    cout<<"Enter the value to be inserted - ";
    cin>>val;
    cout<<"Enter position - ";
    cin>>ind;

    insert_dll(first, val, ind);
    display_dll(first);
    
    return 0;
}