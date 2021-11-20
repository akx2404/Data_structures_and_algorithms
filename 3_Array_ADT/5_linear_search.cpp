#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int A[20];
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

void swap(int *e1, int *e2){
    int temp;
    temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}

int linear_search(struct array *p, int inp){
    int i;
    for(i=0; i<p->length; i++){
        if (p->A[i]==inp){
            swap(&p->A[i], &p->A[0]);
            return 0;
        }
    }
    return -1;
}


int main(){

    struct array arr = {{1,2,3,4,5,6,7,8,9,10}, 20, 10};

    cout<<"Enter number to search - ";
    int inp;
    cin>>inp;

    cout<<linear_search(&arr, inp)<<endl;
    display(&arr);
    return 0;


}