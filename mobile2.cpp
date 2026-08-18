#include<iostream>
using namespace std;
class mobile{
	public:
		int mobileID;
		string mobileSe;
		float price;
		
	void accept(){
		cout<<"Mobile ID:";
		cin>>mobileID;
		
		cout<<"Mobile Series:";
		cin>>mobileSe;
		
		cout<<"Mobile Price:";
		cin>>price;
	}
	void display(){
		cout<<"Mobile ID"<<mobileID<<endl;
		cout<<"Mobile Series"<<mobileSe<<endl;
		cout<<"Mobile Price"<<price<<endl;
	}
};
int main(){
	mobile m[5];
	int i;
	cout<<"Enter Information 5 mobiles";
	for(i=0;i<5;i++)
	{
		cout<<"\n----Mobile information:----"<<i+1<<endl;
		m[i].accept();
	}
	cout<<"\nMobile Details:";
	for(i=0;i<5;i++){
		cout<<"\n----Mobile information:----"<<i+1<<endl;
		m[i].display();
	}
	return 0;
}