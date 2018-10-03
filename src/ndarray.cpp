#include<iostream>
#include "../include/array.h"

using namespace std;

int main(){

	numpy n;
	double a=2;
	n.array(&a);
	n.print();		

	return 0;

}
