#include<iostream>
using namespace std;
class payment{
	public:
		virtual void pay(){
			cout<<"processing payment"<<endl;
		}
};
class UPI:public payment{
	public:
		void pay(){
			cout<<"payment through UPI"<<endl;
		}
};
class card:public payment{
	public:
		void pay(){
			cout<<"payment through card"<<endl;
		}
};
class cash:public payment{
	public:
		void pay(){
			cout<<"payment through cash"<<endl;
		}
};
void paymentprocess(payment *ptr){
	ptr->pay();
}
int main(){
	UPI u;
	card c;
	cash cash;
	paymentprocess(&u);
		paymentprocess(&c);
			paymentprocess(&cash);
}