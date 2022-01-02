#include<stdio.h>
#include<iostream>
using namespace std;

string change_to_upper(string p){
    int i;
    for(i=0; p[i]!='\0'; i++){
        p[i]= p[i] - 32;
    }

    return p;
}

string change_to_lower(string p){
    int i;
    for(i=0; p[i]!='\0'; i++){
        p[i]= p[i] + 32;
    }

    return p;
}

int main(){
    string original_name = "akshad";
    string NAME = change_to_upper(original_name);
    cout<<NAME<<endl;
    string name = change_to_lower(NAME);
    cout<<name;
}