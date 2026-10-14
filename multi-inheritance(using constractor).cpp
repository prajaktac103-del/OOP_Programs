#include<iostream>
using namespace std;
class father{
	public:
		father(){
			cout<<"fathers skills"<<endl;
		}
};
class mother{
	public:
		mother(){
			cout<<"mother hobbies"<<endl;
		}
};
class child:public father,public mother{
	public:
	  child(){
		cout<<"childs study"<<endl;
	}
};
int main(){
	child obj;
	return 0;
}