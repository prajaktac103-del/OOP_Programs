#include<iostream>
using namespace std;
class Number
{
public :
int value;
Number(int x)
{
value=x;
}
Number operator + (Number obj)
{
Number temp(0);
temp.value=value+obj.value;
return temp;
}
Number operator -(Number obj)
{
Number temp(0);
temp.value=value-obj.value;
return temp;
}
Number operator *(Number obj)
{
Number temp(0);
temp.value=value*obj.value;
return temp;
}
Number operator /(Number obj)
{
Number temp(0);
temp.value=value/obj.value;
return temp;
}
};
int main()
{
Number n1(50);
Number n2(40);
Number n3=n1+n2;
Number n4=n1-n2;
Number n5=n1*n2;
Number n6=n1/n2;
cout<<"Addition:"<<n3.value<<endl;
cout<<"Substration:"<<n4.value<<endl;
cout<<"Multiplition:"<<n5.value<<endl;
cout<<"Division:"<<n6.value<<endl;
return (0);
}