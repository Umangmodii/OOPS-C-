#include <iostream>

using namespace std;

class Default
    {
        public:
            Default()
            {
                cout << "Default Constructor!";
            }
    };

int main()
{
   Default d;
   Default d1;

    return 0;
}