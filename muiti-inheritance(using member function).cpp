#include <iostream>
using namespace std;
class Father
{
public:
    void skills()
    {
        cout << "Father's skills" << endl;
    }
};
class Mother
{
public:
    void hobbies()
    {
        cout << "Mother's hobbies" << endl;
    }
};
class Child : public Father, public Mother
{
public:
    void study()
    {
        cout << "Child studies" << endl;
    }
};

int main()
{
    Child c;

    c.skills();   
    c.hobbies();  
    c.study();    

    return 0;
}