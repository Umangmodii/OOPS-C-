#include <iostream>

using namespace std;

// Base class
class A
{
    public:
        A()
        {
            cout << "Base class A...." << endl;
        }
};

class B : public A
{
    public:
        B()
        {
            cout << "Base class B....." << endl;   
        }
};

class C : public B 
{
    public:
        C()
        {
            cout << "Derived class C....." << endl;
        }
};

int main()
{
    C c1;

    return 0;
}