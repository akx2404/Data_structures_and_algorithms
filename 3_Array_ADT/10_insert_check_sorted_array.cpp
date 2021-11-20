#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int A[10];
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

void insert_into_sorted_array(struct array *p, int a){
    
    int l = p->length;
    int i=l-1;
    p->length++;
    if((l+1)<p->size){
        while(p->A[i]>a){
        p->A[i+1]=p->A[i];
        i--;
        }

        p->A[i+1]=a;
    }
    else{
        return;
    }
    

}

int main(){

    struct array arr=  {{1,4,9,15,36,57,89}, 10, 7};
    insert_into_sorted_array(&arr, 55);
    display(&arr);

}