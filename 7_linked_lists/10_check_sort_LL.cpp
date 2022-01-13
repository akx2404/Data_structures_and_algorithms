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

bool check_sort(Node *p){
    Node *q=NULL;
    int flag =0;
    q =p;
    p=p->next;
    while(p!=NULL){
        if (q->data > p->data){
            flag = 1;
            break;
        }

        else{
            q = p;
            p=p->next;
        }
    }

    if (flag ==1){
        return false;
    }

    else{
        return true;
    }
}




int main(){
    int A[] = {3,5,7,10,15};
    create_ll(A, 5);
    display_ll(first);
    
    bool out = check_sort(first);
    cout<<out;
    
    return 0;
}