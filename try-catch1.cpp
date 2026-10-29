#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your age:";
	cin>>age;
	try{
		if(age<0){
			throw age;
		}
		cout<<"your age="<<age<<endl;
		
	}
	catch(int x){
		cout<<"exception caught.."<<endl;
		cout<<"age cannot be negative.."<<endl;
	}
	cout<<"program continues..."<<endl;
	return 0;
}