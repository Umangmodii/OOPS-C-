#include <iostream>

using namespace std;

// Base class A
// Base class B extends A
// Base class C
// Base class D extends C,B

class A
{
    public:
        A()
        {
            cout << "Class A.." << endl;
        }
};

class B : public A
{
    public:
        B()
        {
            cout << "Class B.." << endl;
        }   
};

class C
{
    public:
        C()
        {
            cout << "Class C...." << endl;
        }   
};

class D : public C, public B
{
    public:
        D()
        {
            cout << "Class D...." << endl;
        }   
};

int main()
{
    D d;

    return 0;
}