#include<stdio.h>
#include<iostream>
using namespace std;

int* create_array(int d){
    
    int *a;
    a = new int[(d*(d+1))/2];

    for (int j=1; j<=d; j++){
        for (int i=1; i<=j; i++){
            cout<<"Enter element ["<<i<<","<<j<<"] - ";
            int index = (j*(j-1))/2 + i - 1;
            cin>>a[index];
        }
    }

    return (a);
}

void create_low_tri_matrix(int a[], int m, int n, int d){
    int i,j;

    int mat[m][n];

    for (i=1; i<=m; i++){
        for (j=1; j<=n; j++){
            if (j>=i){
                int index = (j*(j-1))/2 + i - 1;
                mat[i][j] = a[index];
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
        d=m;
    }
    else{
        d=n;
    }

    arr = create_array(d);

    // for(int i=0; i<d; i++){
    //     cout<<arr[i]<<" ";
    // }

    create_low_tri_matrix(arr,m,n,d);
}