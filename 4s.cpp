#include<iostream>
using namespace std;
class Employee
 {   private:
	   int empId;
	   string name;
	   float salary;
	 
	public:
		Employee(){
			empId=0;
			name="unknown";
			salary=0;
			
		}
		Employee(int id){
			empId=id;
			name="unknown";
			salary=0;
		}
		Employee(int id,string n,float s){
			empId=id;
			name=n;
			salary=s;
		}
		void display(){
			cout<<"Employee Id:"<<empId<<endl;
				cout<<" Employee Name:"<<name<<endl;
					cout<<"Employee salary:"<<salary<<endl;
		}
};
int main(){
	
	Employee e1;
	Employee e2(101);
	Employee e3(102,"praju",200000);
	e1.display();
	e2.display();
	e3.display();
	return 0;
}