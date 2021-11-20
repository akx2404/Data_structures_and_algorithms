#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int A[10];
    //int size;
    int length;
};

void display(struct array arr){
    int i;
    for(i =0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}

void find_sum_pair(struct array *p, int s){
    int i,j;
    int *arr = p->A;
    int l = p->length;
    for (i=0; i<p->length; i++){
        if (arr[i] != -1){
            for(j=i+1; j<l; j++){
                if(arr[i] + arr[j] == s){
                    cout << arr[i] <<" + "<< arr[j]<<" = "<<s<<endl;
                }
            }
        }
    }
}

void find_sum_pair_hashing(struct array *p, int s){
    int arr[24];
    int i;
    for(i=0; i<p->length; i++){
        arr[p->A[i]]=1;
        if(arr[s-p->A[i]] == 1){
            cout << p->A[i] <<" + "<< s-p->A[i] <<" = "<<s<<endl;
        }
    }
}

int main(){
    array arr = {{1,4,9,6,5,7,3,10,24,0}, 10};
    cout<<"output with slow algorithm --"<<endl;
    find_sum_pair(&arr, 11);
    cout<<"output with hashing --"<<endl;
    find_sum_pair_hashing(&arr, 11);

}