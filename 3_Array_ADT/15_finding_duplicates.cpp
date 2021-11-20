#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int A[11];
    //int size;
    int length;
};

void display(struct array arr){
    int i;
    for(i =0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}

void find_duplicates(struct array *p){
    int i;
    int temp = 0;

    for (i=0; i<p->length-1; i++){
        if (p->A[i]==p->A[i+1]){
            if(temp != p->A[i]){
                cout<<p->A[i]<<" ";
            }
            temp = p->A[i];
        }
    }
}

void count_duplicates(struct array *p){
    int i,j;
    int temp = 0;

    for (i=0; i<p->length-1; i++){
        if (p->A[i]==p->A[i+1]){
            j=i+1;
            while(p->A[i]==p->A[j]){
                j++;
            }
            if(temp != p->A[i]){
                cout<<p->A[i]<<"-"<<j-i<<" ";
            }
            temp = p->A[i];
        }
    }
}

void find_duplicates_hashing(struct array *p){
    int arr2[21];
    int i;

    for (i=0; i<=21; i++){
        arr2[i] = 0;
    }

    for (i=0; i<p->length; i++){
        arr2[p->A[i]] ++;
    }

    for(i=6; i<=21; i++){
        if (arr2[i] >1){
            cout<<i<<"-"<<arr2[i]<<" ";
        }
    }
     
}

int main(){
    array arr = {{6,8,8,12,15,15,15,20,21,21,21}, 11};
    find_duplicates(&arr);
    cout<<endl;
    count_duplicates(&arr);
    cout<<endl;
    find_duplicates_hashing(&arr);
}