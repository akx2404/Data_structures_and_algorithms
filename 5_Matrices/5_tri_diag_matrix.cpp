#include<stdio.h>
#include<iostream>
using namespace std;

int* create_array(int d){
    
    int *a;
    int index;
    a = new int[3*d-2];
    for (int i=1; i<=d; i++){
        for (int j=1; j<=d; j++){
            // cout<<"Enter element ["<<i<<","<<j<<"] - ";
            if (i-j == 1){
                cout<<"Enter element ["<<i<<","<<j<<"] - ";
                index = i-2;
                cin>>a[index];
            }

            else if(i-j == 0){
                cout<<"Enter element ["<<i<<","<<j<<"] - ";
                index = d-1 + i - 1;
                cin>>a[index];
            }

            else if(i-j == -1){
                cout<<"Enter element ["<<i<<","<<j<<"] - ";
                index = 2*d - 1 + i - 1;
                cin>>a[index];
            }
        }
    }

    return (a);
}

void create_tri_diag_matrix(int a[], int n){
    int i,j;
    int index;
    int mat[n][n];

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            // cout<<"Enter element ["<<i<<","<<j<<"] - ";
            if (i-j == 1){
                mat[i][j] = a[i-2];
            }

            else if(i-j == 0){
                mat[i][j] = a[n-1 + i - 1];
            }

            else if(i-j == -1){
                mat[i][j] = a[2*n - 1 + i - 1];
            }

            else{
                mat[i][j] = 0;
            }
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

    // for(int i=0; i<3*n-2; i++){
    //     cout<<arr[i]<<" ";
    // }

    create_tri_diag_matrix(arr,n);
}