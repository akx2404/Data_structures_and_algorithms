#include<stdio.h>
#include<iostream>
using namespace std;

class array{
    private:
        int *A;
        int size;
        int length;
    public:
        array(){
            A = new int[7];
            size = 10;
            length = 7;
            A[0] =0;
            A[1] =1;
            A[2] =2;
            A[3] =2;
            A[4] =3;
            A[5] =2;
            A[6] =4;
        }

        ~array(){
            delete []A;
        }

        int freq_of_element(int a);
};

int array::freq_of_element(int a){
    int i, count =0;
    for(i=0; i<length; i++){
        if (A[i] == a){
            count++;
        }
    }

    return count;
}


int main(){

    array *arr1;
    arr1=new array();

    cout<<arr1->freq_of_element(2);


    return 0;
}