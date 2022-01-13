#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


void create_cll(int A[], int n){
    int i;
    struct Node *t, *last;

    first = new Node;

    first->data = A[0];
    first->next = first;
    last = first;

    for(i=1; i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }

}


void display_cll(struct Node *h)
{
    do
    {
        cout<<h->data<<" ";
        h=h->next;
    }
    while(h!=first);

    cout<<endl;
}

Node* insert_cll(Node *p, int val, int ind){

    Node *t;
    t = new Node;
    t->data = val;
    t->next = NULL;

    if (ind == 0){
        Node *q = p;

        while(q->next!=first){
            q=q->next;
        }

        t->next = first;
        q->next = t;

    }

    else{
        Node *q = p;
        for(int i =0; i<ind-1; i++){
            q=q->next;
        }

        t->next = q->next;
        q->next = t;
    }

    return p;

}




int main(){
    int A[] = {3,5,7,10,15};
    create_cll(A, 5);
    display_cll(first);

    int val, ind;
    cout<<"Enter the value to be inserted - ";
    cin>>val;
    cout<<"Enter position - ";
    cin>>ind;

    insert_cll(first, val, ind);
    display_cll(first);
    
    return 0;
}