#include <iostream>

using namespace std;

class Destructor
{
    public:
        Destructor()
        {
            cout << "The Default Constructor" << endl;
        }

        ~Destructor()
        {
            cout << "The Tilde Sign Constructor" << endl;
        }
};


int main()
{

    Destructor d1;
    Destructor d2;


    return 0;
}