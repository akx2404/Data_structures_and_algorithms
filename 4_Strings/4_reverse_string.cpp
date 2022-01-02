#include<stdio.h>
#include<iostream>
using namespace std;

void reverse(char p[]){
    int i,j;
    for(j=0; p[j]!='\0'; j++){
    }

    char t;
    j = j-1;

    for(i=0; i<j; i++, j--){
        t = p[i];
        p[i] = p[j];
        p[j] = t;
    }

}

int main(){
    char inp[100];
    cout<<"Enter a word or sentence you want to reverse - ";
    gets(inp);

    reverse(inp);
    cout<<"reversed string - <"<<inp<<">";

}