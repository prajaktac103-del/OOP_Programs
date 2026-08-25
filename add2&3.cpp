#include<iostream>
using namespace std;
class calculator{
	public:
		int add(int a,int b){
			return a+b;
		}
		int add(int a,int b, int c){
			return a+b+c;
			
		}
	
};
int main(){
	calculator c1;
	cout<<"Addition of two no=";
	cout<<c1.add(10,20)<<endl;
	cout<<"Addition of three no=";
	cout<<c1.add(10,20,30)<<endl;
	return 0;
}