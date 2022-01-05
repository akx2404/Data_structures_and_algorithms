#include<stdio.h>
#include<iostream>
using namespace std;

int* create_array(int d){
    
    int *a;
    a = new int[(d*(d+1))/2];

    for (int i=1; i<=d; i++){
        for (int j=1; j<=i; j++){
            cout<<"Enter element ["<<i<<","<<j<<"] - ";
            int index = (i*(i-1))/2 + j - 1;
            cin>>a[index];
        }
    }

    return (a);
}

void create_sym_matrix(int a[], int n){
    int i,j;

    int mat[n][n];

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            int index = (i*(i-1))/2 + j - 1;
            mat[i][j] = a[index];
            mat[j][i] = a[index];
            
            
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