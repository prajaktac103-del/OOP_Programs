#include<iostream>
using namespace std;
class interest{
	public:
		float simple(float p,float r,float t){
			return p*r*t/100;
		}
		
};
int main(){
	interest i1;
	cout<<"Simple Interest="<<i1.simple(200.0,10.0,2)<<endl;
}