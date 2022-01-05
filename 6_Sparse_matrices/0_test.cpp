#include<stdio.h>
#include<iostream>
using namespace std;

struct element{
    int i;
    int j;
    int x;
};

struct sparse{
    int m;
    int n;
    int num;
    struct element *e;
};

void create(struct sparse *s){
    cout<<("enter dimension - ");
    cin>>s->m>>s->n;
    cout<<"Enter number of non-zero elements - ";
    cin>>s->num;

    s->e = new element[s->num];

    cout<<"enter all elements - ";

    for (int i=0; i<s->num; i++){
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
    }
}

void display(struct sparse s){
    int i,j,k = 0;

    for (i=0; i<s.m; i++){
        for (j=0; j<s.n; j++){
            if(i+1==s.e[k].i && j+1==s.e[k].j){
                cout<<s.e[k].x<<" ";
                k++;
            }

            else
                cout<<"0 ";
        }

        printf("\n");
    }

}

struct sparse* add(struct sparse *s1, struct sparse *s2){
    struct sparse *sum;
    int i,j,k;
    i=j=k=0;

    if(s1->n != s2->n && s2->m != s2->m){
        return NULL;
    }

    
}


int main(){
    struct sparse s;            
    create (&s);

    cout<<("matrix - ")<<endl;
    display(s);
}