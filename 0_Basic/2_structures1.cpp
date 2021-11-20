#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle{
	int length;
	int breadth;
};

int main(){
	struct rectangle r;
	r.length = 10;
	r.breadth = 5;
	//or
	//struct rectangle r = {10,5}  //to initialise directly
	
	cout << "area = "<< r.length * r.breadth;
	
	return 0;

}

/*
struct card
{
	int face;
	int shape;
	int color;
};

int main(){
	struct card deck[52]
	//this creates an array of structures. that means every element 
	//of this array will s1represent one card. Each card represents 3 features.
	
}
*/
