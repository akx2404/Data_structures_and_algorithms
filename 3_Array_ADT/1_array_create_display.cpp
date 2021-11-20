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
    cout<<"Elements are --"<<endl;
    for(i =0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}

int main(){

    int n,i;

    struct array arr;
    cout<< "Enter the size of array -- ";
    cin>>arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    cout<<"Enter the number of elements -- ";
    cin>>arr.length;

    //Taking input and forming the array
    n = arr.length;
    for(i =0; i<n; i++){
        cout<<"Enter elemnt no."<<i<<"-- ";
        cin>>arr.A[i];
    }

    display(arr);
    
    return 0;
}