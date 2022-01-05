#include<stdio.h>
#include<iostream>
using namespace std;

int* create_array(int d){
    
    int *a;
    a = new int[2*d - 1];

    for (int i=1; i<=d; i++){
        cout<<"Enter element ["<<1<<","<<i<<"] - ";
        cin>>a[i-1];
    }

    for (int i=2; i<=d; i++){
        cout<<"Enter element ["<<i<<","<<1<<"] - ";
        cin>>a[d-1+i];
    }

    return (a);
}

void create_sym_matrix(int a[], int n){
    int i,j;

    int mat[n][n];

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            int index;

            if (j-i >= 0){
                index = j-i;
            }

            else{
                index = abs(j-i) + n;
            }

            mat[i][j] = a[index];
            
            
        }
    }

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            if (j==n){
                cout<<mat[i][j]<<endl;
            }
            else{
                cout<<mat[i][j]<<" ";
            }
        }
    }
}




int main(){
    int *arr;

    int n;
    int d;
    cout<<"Enter number of rows (or columns) - ";
    cin>>n;

    arr = create_array(n);

    // for(int i=0; i<d; i++){
    //     cout<<arr[i]<<" ";
    // }

    create_sym_matrix(arr,n);
}