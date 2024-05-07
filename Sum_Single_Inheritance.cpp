#include <iostream>

using namespace std;

// Base class
class Base
{
 public:
    int x;
    int y;
    int sum;

        Base(int x,int y)
        {
            sum = x + y;
        }
};

    // Derived Class
class Derived : public Base
{
    public:

    Derived(int x,int y): Base(x, y)
    {

    }

        void display()
        {
            cout << "The Sum is : " << sum;
        }
};

int main()
{
    Derived d(5,10);
    d.display();

    return 0;
}