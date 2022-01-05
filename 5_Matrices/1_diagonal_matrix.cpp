#include<stdio.h>
#include<iostream>
using namespace std;

int* create_array(int d){
    
    int *a;
    a = new int[d];

    for (int i=1; i<=d; i++){
        cout<<"Enter element ["<<i<<","<<i<<"] - ";
        cin>>a[i-1];
    }

    return (a);
}

void create_diagonal_matrix(int a[], int m, int n, int d){
    int i,j;

    int mat[m][n];

    for (i=1; i<=m; i++){
        for (j=1; j<=n; j++){
            if (i==j){
                mat[i][j] = a[i-1];
            }
            else{
                mat[i][j] = 0;
            }
        }
    }

    for (i=1; i<=m; i++){
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

    int m,n;
    int d;
    cout<<"Enter number of columns and rows (2 integers with space in between) - ";
    cin>>m>>n;

    if (m>n){
        d=n;
    }
    else{
        d=m;
    }

    arr = create_array(d);

    // for(int i=0; i<d; i++){
    //     cout<<arr[i]<<" ";
    // }

    create_diagonal_matrix(arr,m,n,d);
}