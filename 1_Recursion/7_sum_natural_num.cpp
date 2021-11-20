#include<iostream>
#include<stdio.h>
using namespace std;

/*  MY METHOD

int sum_of_natural_num(int n){
	int sum;
	if(n>0){
		sum =+ sum_of_natural_num(n-1);
	}
	return sum+n;
	
}

int main(){
	cout<<sum_of_natural_num(3);
}

*/


int sum(int n){
	if(n==0){
		return 0;
	}
	else{
		return sum(n-1)+n;	
	}
	
}

int main(){
	cout<<sum(5);
}
