#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int A[7];
    int size;
    int length;
};

void display(struct array p){
    int i;
    cout<<"Elements are --"<<endl;
    for(i =0; i<p.length; i++){
        cout<<p.A[i]<<" ";
    }
}

struct array* merge(struct array *p1, struct array *p2){
    int i=0,j=0,k=0;
    struct array *c = (struct array *)malloc(sizeof(struct array));
    c->length = p1->length + p2->length;
    c->size = p1->size + p2->size;
    
    int l1=p1->length;
    int l2=p2->length;

    while(i<l1 && j<l2){
        if(p1->A[i]<p2->A[j]){
            c->A[k]= p1->A[i];
            i++;
            k++;
        }

        else if(p1->A[i]>p2->A[j]){
            c->A[k]= p2->A[j];
            j++;
            k++;
        }
    }

    for (;i<l1;i++){
        c->A[k]=p1->A[i];
    }

    for (;j<l2;j++){
        c->A[k]=p2->A[j];
    }

    return c;


}

int main(){

    struct array arr1=  {{1,4,10,15,36,57,89}, 7, 7};
    struct array arr2=  {{2,3,6,18,45,69,97}, 7, 7};
    struct array *arr3;
    arr3 = merge(&arr1, &arr2);

    for (int i =0; i<arr3->length; i++){
        cout<<arr3->A[i]<<" ";
    }

    return 0;

}