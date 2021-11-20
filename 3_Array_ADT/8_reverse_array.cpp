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

void reverse_array_aux_arr_method(struct array *p){
    struct array aux_arr;
    aux_arr.size = p->size;
    aux_arr.length = p->length;
    int i;
    int l = p->length;
    for (i=0; i< p->length; i++){
        aux_arr.A[i] = p->A[l-i-1];
    }

    for (i=0; i< p->length; i++){
        p->A[i] = aux_arr.A[i];
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array_swap_method(struct array *p){
    int i,j;
    for (i=0, j=p->length-1; i<j; i++, j--){
        swap(&p->A[i], &p->A[j]);
    }
}

int main(){

    struct array arr;
    create(&arr);
    cout<<"Original array - ";
    display(arr);
    cout<<endl;
    reverse_array_aux_arr_method(&arr);
    cout<<"Reversed array using aux method- ";
    display(arr);
    cout<<endl;
    reverse_array_swap_method(&arr);
    cout<<"Reversed array using swap method- ";
    display(arr);

}