#include<iostream>
using namespace std;
class employee{
	private:
		int ID;
		string name;
		float salary;
	public:
	 void accept(){
		cout<<"\nEnter your ID:";
		cin>>ID;
		cout<<"\nEnter your Name:";
		cin>>name;
		cout<<"\nEnter your Salary:";
		cin>>salary;
	}
	void display(){
		cout<<"\n----Employee Data----"<<endl;
		cout<<"\nEmployee ID:"<<ID<<endl;
		cout<<"\nEmployee Name:"<<name<<endl;
		cout<<"\nEmployee Salary:"<<salary<<endl;
	}
};
int main(){
	employee s1;
	s1.accept();
	s1.display();
	return 0;
}