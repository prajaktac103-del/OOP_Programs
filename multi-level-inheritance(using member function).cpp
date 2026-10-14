#include<iostream>
using namespace std;
class grandfather{
	public:
		void house(){
			cout<<"grandfathers house"<<endl;
		}
};
class father:public grandfather{
	public:
		void car(){
			cout<<"fathers car"<<endl;
		}
};
class child:public father{
	public:
		void bike(){
			cout<<"child bike"<<endl;
		}
};
int main(){
	child c;
	c.house();
	c.car();
	c.bike();
	return 0;
}