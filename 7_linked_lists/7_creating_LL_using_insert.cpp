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


int main(){
    int n;
    cout<<"Enter first element - ";
    cin>>n;

    first = new Node;
    first->data = n;
    first->next = NULL;
    cout<<"initial linked list - ";
    display_ll(first);

    string c="yes";

    while(c=="yes"){
        insert_node_at_last(first);
        display_ll(first);

        cout<<"continue? yes or no - ";
        cin>>c;
    }
    
    return 0;
}