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

void insert(struct array *p, int inp, int ind){
    int l = p->length, i;
    if (ind>=0 && ind <= p->size){
        for(i=l; i>ind; i--){
            p->A[i]=p->A[i-1];
        }
        p->A[ind] = inp;
        p->length++;
    }

    else{
        return;
    }
}


int main(){

    struct array arr;
    create(&arr);

    cout<<"Enter number to insert and at what index - ";
    int inp, ind;
    cin>>inp>>ind;

    cout<<"before- "<<endl;
    display(&arr);
    insert(&arr, inp, ind);
    cout<<endl<<"after- "<<endl;
    display(&arr);

    return 0;


}