#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
	int a =10;
	int *p;
	
	p= &a;
	
	cout << "value of a - "<<a<<endl;
	cout << "value of p - "<<p<<endl;
	cout << "value of *p - "<<*p;
	
	//printf("%d",a);
	//printf("\n%d",*p);
}

