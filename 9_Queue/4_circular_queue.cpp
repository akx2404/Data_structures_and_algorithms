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

void enqueue(queue *qu, int x){
    if(qu->rear == qu->front - 1){
        cout<<"Queue full !"<<endl;
    }

    else if(qu->rear == qu->size - 1 and qu->front != 0){
        qu->rear = 0;
        qu->q[0]= x;
    }

    else{
        qu->rear ++;
        qu->q[qu->rear] = x;
        display_queue(*qu);
    }
}

int dequeue(queue *qu){
    int x =-1;
    if(qu->front == qu->rear){
        cout<<"Queue empty !"<<endl;
    }

    else if(qu->front == qu->size - 1){
        x = qu->q[qu->front];
        qu->front = 0;
    }

    else{
        qu->front++;
        x = qu->q[qu->front];
        display_queue(*qu);
    }

    return x;
}

int main(){
    struct queue qu;
    create_queue(&qu);
    enqueue(&qu, 1);
    enqueue(&qu, 2);
    enqueue(&qu, 3);
    enqueue(&qu, 9);
    enqueue(&qu, 6);
    enqueue(&qu, 3);
    enqueue(&qu, 2);
    dequeue(&qu);
    dequeue(&qu);
    dequeue(&qu);
    enqueue(&qu, 15);
    enqueue(&qu, 20);
    enqueue(&qu, 20);
}