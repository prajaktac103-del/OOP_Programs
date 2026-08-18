#include<iostream>
using namespace std;
class book{
	private:
		float ID;
		string title;
		float price;
	public:
	 void accept(){
		cout<<"\nEnter your Book ID:";
		cin>>ID;
		cout<<"\nEnter your Book Title:";
		cin>>title;
		cout<<"\nEnter your Book Price:";
		cin>>price;
	}
	void display(){
		cout<<"\n----Employee Data----"<<endl;
		cout<<"\nBook ID:"<<ID<<endl;
		cout<<"\nBook Title:"<<title<<endl;
		cout<<"\nBook price:"<<price<<endl;
	}
};
int main(){
	book s1;
	s1.accept();
	s1.display();
	return 0;
}