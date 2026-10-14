#include<iostream>
using namespace std;
class person{
	public:
		string name;
		void displayName(){
			cout<<"name:"<<name<<endl;
		}
};
class student:public person{
	public:
		int rollno;
		void displayRollno(){
			cout<<"roll no:"<<rollno<<endl;
		}
};
int main(){
	student s;
	s.name="praju";
	s.rollno=116;
	s.displayName();
	s.displayRollno();
     return 0;	
}