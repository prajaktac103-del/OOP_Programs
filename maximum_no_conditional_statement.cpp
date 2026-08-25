#include<iostream>
using namespace std;
class Max{
	public:
		int max(int a,int b){
		  return (a>b)?a:b;	
		}
		int max(int a,int b,int c){
		  int m=(a>b)?a:b;
		  return (m>c)?m:c;
		}
		int max(int a,int b,int c,int d){
		  int m=(a>b)?a:b;
		  m=(m>c)?m:c;
		  return (m>d)?m:d;
		}
};
int main(){
	Max m1;
	cout<<"maximum of 2 no=";
	cout<<m1.max(10,20)<<endl;
	cout<<"maximum of 3 no=";
	cout<<m1.max(10,20,30)<<endl;
	cout<<"maximum of 4 no=";
	cout<<m1.max(10,20,30,40)<<endl;
	return 0;
}