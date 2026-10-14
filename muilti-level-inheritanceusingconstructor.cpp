#include <iostream>
using namespace std;
class Father
{
public:
     Father()
    {
        cout << "Father's skills" << endl;
    }
};
class Mother
{
public:
    Mother()
    {
        cout << "Mother's hobbies" << endl;
    }
};
class Child : public Father, public Mother
{
public:
    Child()
    {
        cout << "Child studies" << endl;
    }
};

int main()
{
    Child c;

    return 0;
}