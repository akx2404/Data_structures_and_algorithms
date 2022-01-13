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



int main(){
    int A[] = {3,5,7,10,15};
    create_cll(A, 5);
    display_cll(first);
    
    return 0;
}