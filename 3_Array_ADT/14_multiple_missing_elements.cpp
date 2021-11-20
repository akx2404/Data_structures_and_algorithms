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

void find_missing_method1( struct array *p){
    int diff = p->A[0];
    int diff2;
    int i,j;
    for (i=0; i<p->length; i++){
        if(p->A[i]-i != diff){
            diff2 = p->A[i]-i-diff;
            for (j=0; j<diff2; j++){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }
}

void find_missing_method2(struct array *p){
    int arr2[29];
    int i;

    for (i=0; i<29; i++){
        arr2[i] = 0;
    }

    for (i=0; i<p->length; i++){
        arr2[p->A[i]] ++;
    }

    for(i=6; i<29; i++){
        if (arr2[i] == 0){
            cout<<i<<" ";
        }
    }
     
}

int main(){
    array arr = {{6,8,11,12,15,16,17,20,21,29}, 10};
    find_missing_method1(&arr);
    cout<<endl;
    find_missing_method2(&arr);

}