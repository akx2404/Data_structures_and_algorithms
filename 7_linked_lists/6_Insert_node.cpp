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


Node* insert_node_at_last(Node *p){
    int inp;
    cout<<"Enter value of node to insert at the end - ";
    cin>>inp;

    struct Node *t;

    t = new Node;
    t->data = inp;
    t->next = NULL;

    while(p!= NULL){
        if (p->next == NULL){
            p->next = t;
            p=t;
        }

        p= p->next;
    }

    return p;

}

Node* insert_node(Node *p){

    int inp,n;
    cout<<"Enter value of node to insert - ";
    cin>>inp;
    cout<<"Enter index - ";
    cin>>n;

    int count = 1, flag = 0;
    Node *q;
    q = p;
    p = p->next;
    Node *t;

    t= new Node;
    t->data = inp;
    t->next = NULL;

    if (n == 0){
        // t->next = first->next;
        // first ->next = t;
        // first = t;

        t->next = first;
        first = t;
    }

    // while (p!=NULL){
    //     if (n == count){
    //         t->next = p;
    //         q->next = t;
    //         q = t;
    //     }

    //     q=p;
    //     p=p->next;
    //     count ++;
    // }

    for (int i=0; i<n-1; i++){
        p=p->next;
    }
    t->next = p->next;
    p->next = t;

    return p;

}


int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);

    insert_node_at_last(first);
    display_ll(first);

    insert_node(first);
    display_ll(first);
    
    return 0;
}