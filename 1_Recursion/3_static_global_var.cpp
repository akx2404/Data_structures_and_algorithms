#include<iostream>
using namespace std;

int x = 0;
int fun(int n){
	if (n>0){
		x ++;
		
		return fun(n-1) + x; //use n instead of x then it wont be static
	}
	return 0;
}

int main(){
	int a = 5;
	cout<< fun(a);
	return 0;
}
