#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    struct Node *next;
    int data;
}*first=NULL, *rear=NULL;

void display_queue(Node *p){
    for (int i=0; p!=NULL; i++){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void enqueue(struct Node *p, int x){
    Node *t = new Node;

    if (t==NULL){
        cout<<"Queue is full !"<<endl;
    }

    else{
        t->data = x;
        t->next = NULL;

        if (first == NULL){
            first = t;
            rear = t;
        }
        
        else{
            rear->next = t;
            rear = t;
        }

        display_queue(first);
    }
}

int main(){
    enqueue(first, 1);
    enqueue(first, 2);
    enqueue(first, 3);
    enqueue(first, 4);
    enqueue(first, 5);
}