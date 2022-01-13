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


Node* Search_value(Node *p, int key){
    int count = 0;
    while (p!=NULL){
        if(p->data == key){
            cout<<endl<<"index - "<<count;
            return p;
        }

        p=p->next;
        count ++;
    }

    return NULL;
}

Node* Search_value_recursion(Node *p, int key){
    
    if(p==NULL){
        return NULL;
    }

    else if (key == p->data){
        return p;
    }

    else
        return Search_value_recursion(p->next, key);

}

Node* Search_value_transposition(Node *p, int key){

    Node *q= NULL;
    int count = 0;

    while (p!=NULL){
        if(p->data == key){
            q->next = p->next;
            p->next = first;
            first = p;
            cout<<endl<<"index - "<<count;
            return p;
        }

        q = p;
        p=p->next;
        count ++;
    }

    return NULL;
    

}



int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);

    Node *p, *q, *r;

    p = Search_value(first, 10);
    q = Search_value_recursion(first, 10);

    cout<<endl<<"normal - "<<p->next<<", recursion - "<<q->next;

    r = Search_value_transposition(first, 10);
    cout<<endl<<"before transposition - "<<r->next;
    r = Search_value(first, 10);
    cout<<endl<<"after transposition - "<<r->next;
    
    return 0;
}