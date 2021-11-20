#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
    int *A;
    int size;
    int length;
};

void display(struct array *p){
    int i;
    for(i =0; i<p->length; i++){
        cout<<p->A[i]<<" ";
    }
}

void create(struct array *p){
    int n,i;
    cout<< "Enter the size of array -- ";
    cin>>p->size;

    p->A = new int[p->size];
    p->length = 0;

    cout<<"Enter the number of elements -- ";
    cin>>p->length;
    n = p->length;
    for(i =0; i<n; i++){
        cout<<"Enter elemnt no."<<i<<"-- ";
        cin>>p->A[i];
    }
}

int get(struct array *p1, int ind){
    if(ind>=0 and ind<p1->length){
        return p1->A[ind];
    }
}

void set(struct array *p1, int ind, int value){
    if(ind>=0 && ind<p1->length){
        p1->A[ind]=value;
    }
}

void average(struct array *p1){
    int i, sum=0;
    double avg;
    for (i=0; i<p1->length; i++){
        sum = sum + p1->A[i];
    }
    avg = sum/p1->length;
    cout<<avg;
}

void find_max(struct array *p1){
    int max=p1->A[0];
    int i;
    for(i=1; i<p1->length; i++){
        if(p1->A[i]>max){
            max = p1->A[i];
        }
    }

    cout<<max;
}



int main(){

    struct array arr;
    create(&arr);

    
    int get_val, set_val, set_ind, avg;

    cout<<endl<<"Your array -  "<<endl;
    display(&arr);

    cout<<endl<<endl<<"Enter index whose value u want - ";
    cin>>get_val;
    cout<<get(&arr, get_val);

    cout<<endl<<endl<<"Enter index whose value u want to change -  ";
    cin>>set_ind;
    cout<<"Enter the value - ";
    cin>>set_val;
    set(&arr, set_ind, set_val);
    cout<<"new array - ";
    display(&arr);

    cout<<endl<<endl<<"Average of the array elemnets is - ";
    average(&arr);

    cout<<endl<<endl<<"Max of the array elemnets is - ";
    find_max(&arr);
    
    cout<<" "<<endl;
    return 0;


}