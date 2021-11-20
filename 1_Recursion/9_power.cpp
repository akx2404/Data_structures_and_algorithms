#include<iostream>
#include<stdio.h>
using namespace std;

 int pow(int m, int n){
 	if (n==0){
 		return 1;
	 }
	
	else{
		return pow(m, n-1)*m;
	}
 }
 
  int pow_more_eff(int m, int n){
 	if (n==0){
 		return 1;
	 }
	 
	if(n%2==0){
		return pow(m*m, n/2);
	}
	
	else{
		return pow(m*m, (n-1)/2)*m;
	}
 }
 
 int main(){
 	cout<<pow(2,5)<<endl;
 	cout<<pow_more_eff(2,5);
 }
