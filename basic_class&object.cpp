#include<iostream>
using namespace std;
class info{
	public:
		int rollNo=116;
		string courseName="AIML";
		
	void display(){
		cout<<"Roll Number:"<<rollNo<<endl;
		cout<<"Course Name:"<<courseName<<endl;
	}
};
int main(){
	info i;
	i.display();
}