#include<iostream>
using namespace std;
class show{
	public:
	 int roll;
	 string name;
	 int marks;
	 
	show(int r,string n,int m){
		roll=r;
		name=n;
		marks=m;
	}
	show(show &obj){
		roll=obj.roll;
		cout<<"your rollno is:"<<roll<<endl;
		name=obj.name;
		cout<<"your name is:"<<name<<endl;
		marks=obj.marks;
		cout<<"your marks are:"<<marks<<endl;
	}
	
};
int main()
{
	show s1(116,"Prajakta",900);
	show s2(s1);
	return 0;
	}
	