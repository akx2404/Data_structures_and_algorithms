#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int *A;
    int size;
    int length;
};

void display(struct array *p){
    int i;
    cout<<"Elements are --"<<endl;
    for(i =0; i<p->length; i++){
        cout<<p->A[i]<<" ";
    }
}

void create(struct array *p){
    int n,i;
    cout<< "Enter the size of array -- ";
    cin>>p->size;

    p->A = new int[p->size];
    p->length = 0;

    cout<<"Enter the number of elements -- ";
    cin>>p->length;
    n = p->length;
    for(i =0; i<n; i++){
        cout<<"Enter elemnt no."<<i<<"-- ";
        cin>>p->A[i];
    }
}

void append(struct array *p, int inp){
    int l = p->length;
    if (p->length < p->size){
        p->A[l] = inp;
        p->length++;
    }

    else{
        return;
    }
}


int main(){

    struct array arr;
    create(&arr);

    cout<<"Enter number to append - ";
    int inp;
    cin>>inp;

    cout<<"before- "<<endl;
    display(&arr);
    append(&arr, inp);
    cout<<endl<<"after- "<<endl;
    display(&arr);

    return 0;


}