#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a[] = {2,4,5,6,7,99,34,67,10,47};
	cout<<"Size of the array is --  "<<sizeof(a)<<" bytes"<<endl;
	int length = sizeof(a)/sizeof(a[0]);
	cout << "length of the array is -- "<<length<<endl;
	int i;
	//for( int x:a)
	for(i=0;i<length;i++)
	{
		//cout<< x<<endl;
		cout << a[i] <<endl;
		//printf("%d\n",a[i]);
	}
	
	return 0;
}

