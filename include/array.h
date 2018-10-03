#ifndef NUMPY_ARRAY_H
#define NUMPY_ARRAY_H
#include<iostream>
#include<string>
#include<cmath>

class shape{
	protected:
	int x;
	int y;
	public:
	shape(int x, int y){
		this->x=x;
		this->y=y;
	}
	void print(){
		std::cout<<"("<<this->x<<", "<<this->y<<")"<<std::endl;
	}
};

class numpy:public shape{
	private:
	double **arr;
	public:
	numpy():shape(0,0){
		/*x = 0;
		y = 0;*/
	}
	void array(double *a){
		std::cout<<"array created"<<std::endl;		
	}
	/*void array(double **a){

	}
	void array(shape s, double x){
	
	}
	void array(shape s, bool rand= false){
		
	}*/
	
	
};

#endif
