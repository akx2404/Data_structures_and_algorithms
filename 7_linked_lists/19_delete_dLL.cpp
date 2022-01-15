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

void delete_dll(Node *p, int val){

    p=first;
    
    while(p->next->data != val){
        p=p->next;
    }

    p=p->next;
    p->prev->next = p->next;
    if(p->next){
        p->next->prev = p->prev;
    }

    delete p;


}


int main(){
    int A[] = {3,5,7,10,15};
    create_dll(A, 5);
    display_dll(first);

    int val;
    cout<<"Enter the value to be deleted - ";
    cin>>val;
    delete_dll(first, val);
    display_dll(first);
    
    return 0;
}