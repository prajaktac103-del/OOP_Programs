#include<iostream>
using namespace std;
class demo{
	 public:
	 	demo(){
	 		cout<<"Constructor is called"<<endl;
		 }
		 ~demo(){
		 	cout<<"Destructor is called"<<endl;
		 }
};
int main(){
	cout<<"Object is created"<<endl;
	demo obj;
	cout<<"Object is used"<<endl;
	cout<<"End of the main()"<<endl;
	return 0;
}