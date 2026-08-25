#include<iostream>
using namespace std;
class Area{
	public:
	 float area(float side){
	 	return side*side;
	 }
	 float area(float length,float breadth){
	 	return length*breadth;
	 }
	 float area(float base,float height,int x){
	 	return 0.5*base*height;
	 }
	 float area(float radius,int x){
	 	return 3.12*radius*radius;
	 }
};
int main(){
	Area a1;
	cout<<"Area of Square="<<a1.area(5)<<endl;
	cout<<"Area of rectangle="<<a1.area(10.0f,5.0f)<<endl;
	cout<<"Area of triangle="<<a1.area(10.0f,6.0f,1)<<endl;
	cout<<"Area of circle="<<a1.area(7.0f,1)<<endl;
	return 0;
}