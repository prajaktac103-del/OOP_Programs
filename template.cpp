#include<iostream>
using namespace std;
template<class T>
class demo{
	public:
	  T value;
	void display(){
		cout<<"Value="<<value<<endl;
	}
};
int main(){
	demo<int>d1;
	d1.value=10;
	d1.display();
	
	demo<float>d2;
	d2.value=5.5f;
	d2.display();
	
	demo<char>d3;
	d3.value='A';
	d3.display();
	return 0;
}