#include<stdio.h>
#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

void create_stack(stack *st){

    cout<<"Enter size of the stack - ";
    cin>>st->size;
    st->s = new int[st->size];
    st->top = -1;

    for (int i=0; i<st->size; i++){
        cout<<"Enter element["<<i+1<<"] - ";
        cin>>st->s[i];
        st->top++;
    }
    cout<<"top- "<<st->top<<endl;
}

void display_stack(stack *st){
    for (int i=0; i<st->size; i++){
        cout<<st->s[i]<<" ";
    }

    cout<<endl;
}

void push(stack *st, int x){
    if (st->top == st->size-1){
        cout<<"Stack overflow !"<<endl;
    }

    else{
        st->top++;
        st->s[st->top] = x;
        display_stack(st);
    }
}

int main(){
    struct stack st;
    create_stack(&st);
    display_stack(&st);
    cout<<"Enter value to push to stack - ";
    int n;
    cin>>n;
    push(&st, n);

}