#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter 1st number:";
	cin>>a;
	cout<<"enter 2nd number:";
	cin>>b;
	try{
		if(b==0){
			throw b;
	      }
		cout<<"division="<<a/b<<endl;
	}
	catch(int x){
		cout<<"error:division by zero is not allowed!!!"<<endl;
		
	}
	cout<<"pogram continues...."<<endl;
	return 0;
}