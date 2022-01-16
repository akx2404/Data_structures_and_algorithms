#include<stdio.h>
#include<iostream>
using namespace std;

struct queue{
    int size;
    int front;
    int rear;
    int *q;
};

void create_queue(queue *qu){
    
    cout<<"Enter the size of the queue - ";
    cin>>qu->size;
    qu->front = qu->rear = -1;
    qu->q = new int[qu->size];

}

void display_queue(queue qu){
    for (int i=0; i<qu.size; i++){
        cout<<qu.q[i]<<" ";
    }

    cout<<endl;
}

int main(){
    struct queue qu;
    create_queue(&qu);
    display_queue(qu);
}