#include<iostream>
#include<stdio.h>
#include<stdlib.h> //special lib when accesing heap
using namespace std;


int main(){
	int *p;
	p = (int *)malloc(5*sizeof(int)); //-- for C
	printf("%d",*p);
	p = new int[5]; // -- for C++
	cout<<endl<<*p;
	
	delete [] p; //C
	free(p); //C++
	
	return 0;
	
}
