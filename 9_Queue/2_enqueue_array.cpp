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
    for (int i=0; i<qu.rear+1; i++){
        cout<<qu.q[i]<<" ";
    }

    cout<<endl;
}

void enqueue(queue *qu, int x){
    if(qu->rear == qu->size - 1){
        cout<<"Queue full !"<<endl;
    }

    else{
        qu->rear ++;
        qu->q[qu->rear] = x;
        display_queue(*qu);
    }
}

int main(){
    struct queue qu;
    create_queue(&qu);
    enqueue(&qu, 888);
    enqueue(&qu, 6);
    enqueue(&qu, 99);
    enqueue(&qu, 25);
    enqueue(&qu, 18);
}