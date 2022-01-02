#include<stdio.h>
#include<iostream>
using namespace std;


void change_to_lower(char p[]){
    int i;
    for(i=0; p[i]!='\0'; i++){
        if(p[i]>=65 and p[i]<=90){
            p[i]= p[i] + 32;
        }
    }
}


void count_vowels_consonents(char p[]){
    int i;
    int v_count = 0;
    int c_count = 0;

    change_to_lower(p);

    for(i=0; p[i]!='\0'; i++){
        if(p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u'){
            v_count++;
        }
        else{
            c_count++;
        }
    }

    cout<<"number of vowels: "<<v_count<<endl;
    cout<<"number of consonents: "<<c_count;
}

int main(){
    char name[] = "aksHAd";
    count_vowels_consonents(name);
}