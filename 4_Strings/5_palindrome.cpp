#include<stdio.h>
#include<iostream>
using namespace std;

void check_palindrome(char p[]){
    int i,j,flag;
    for(j=0; p[j]!='\0'; j++){
    }

    j = j-1;

    for(i=0; i<j; i++, j--){
        if(p[i] == p[j]){
            flag = 0;
        }
        else{
            flag = 1;
            break; 
        }
    }

    if (flag == 1){
        cout<<"Not a palindrome !";
    }

    else{
        cout<<"Palindrome !";
    }


}

int main(){
    char inp[100];
    cout<<"Enter a word to check for palindrome - ";
    gets(inp);

    check_palindrome(inp);

}