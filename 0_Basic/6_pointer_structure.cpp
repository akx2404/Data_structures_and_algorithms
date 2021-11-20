#include<stdio.h>
#include<iostream>

using namespace std;

struct rectangle{
	int length;
	int breadth;
};

int main(){
	struct rectangle r ={10,5};
	struct rectangle *p = &r;
	
	p->length=20;	
	(*p).breadth=30;
	int area = r.length*r.breadth;
	cout<<"area is --- "<<area;
	
	return 0;
}
