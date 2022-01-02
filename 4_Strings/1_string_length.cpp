#include<stdio.h>
#include<iostream>
using namespace std;

void find_length(char p[]){
    int i = 0;
    /* while(p[i] != '\0'){
        i++;
    }
    cout<<i; */

for(i=0; p[i]!='\0'; i++){}
    cout<<i;
}

int main(){

    char name[] = "Akshad";
    find_length(name);
    return 0;

}