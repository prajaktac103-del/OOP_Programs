#include<iostream>
using namespace std;
class father{
	public:
		virtual void show(){
			cout<<"this is a father class"<<endl;
		}
};
class child:public father{
	public:
		void show(){
			cout<<"child class"<<endl;
		}
};
int main(){
	father *ptr;
	child c;
	ptr=&c;
	ptr->show();
	return 0;
	
}