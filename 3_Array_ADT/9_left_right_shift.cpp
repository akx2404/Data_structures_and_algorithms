#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int *A;
    int size;
    int length;
};

void display(struct array arr){
    int i;
    for(i =0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
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

void left_shift(struct array *p){
    int i;
    int l = p->length;
    int temp = p->A[0];
    for(i=0; i<l; i++){
        p->A[i]=p->A[i+1];
    }
    p->A[l-1]= temp;
}

int main(){

    struct array arr;
    create(&arr);
    cout<<"Original array - ";
    display(arr);
    cout<<endl;
    left_shift(&arr);
    cout<<"Left shifted array- ";
    display(arr);

}