#include<iostream>
using namespace std;
class student{
	public:
		int rn;
		string na;
		string mn;
	void accept(){
		cout<<"\nEnter your Roll No:";
		cin>>rn;
		cout<<"\nEnter your Name:";
		cin>>na;
		cout<<"\nEnter your Mobile Number:";
		cin>>mn;
	}
	void display(){
			cout<<"\n----Student Data----"<<endl;
		cout<<"\nRoll No:"<<rn<<endl;
		cout<<"\nName:"<<na<<endl;
		cout<<"\nMobile Number:"<<endl;
	}
};
int main(){
	student s1;
	
	s1.accept();
	s1.display();
}