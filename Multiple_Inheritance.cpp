#include <iostream>

using namespace std;

// Base class
class A 
{
    public:
        
        A()
        {
            cout << "Base Class A....." << endl;            
        }
};

// Base Class
class B
{
    public:
        B()
        {
            cout << "Base Class B....." << endl;
        }
};

// Derived Class
class C : public A, public B
{
    public:
        C()
        {
            cout << "Base Class A and B....." << endl;
        }
};

int main()
{
    C c1;

    return 0;
}
