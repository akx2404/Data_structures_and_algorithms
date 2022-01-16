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

int main(){
    display_queue(first);
}