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
}

int sum(struct Node *p){
    int sum = 0;
    while(p!= NULL){
        sum = sum + p->data;
        p=p->next;
    }

    return sum;
}




int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);
    int c = sum(first);
    cout<<endl<<"sum of elements - "<<c;
    return 0;
}