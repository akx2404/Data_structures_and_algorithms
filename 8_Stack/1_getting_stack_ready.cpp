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
    }
}

void display_stack(stack *st){
    for (int i=0; i<st->size; i++){
        cout<<st->s[i]<<" ";
    }

    cout<<endl;
}

int main(){
    struct stack st;
    create_stack(&st);
    display_stack(&st);

}