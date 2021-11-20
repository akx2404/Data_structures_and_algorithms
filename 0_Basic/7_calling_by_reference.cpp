#include <iostream>
using namespace std;

void swap(int &x, int &y){
	int temp = x;
	x=y;
	y=temp;
}

int main(){
	int a=10;
	int b=20;
	printf("%d, %d",a,b);
	swap(a,b);
	printf("\n%d, %d",a,b);
}
