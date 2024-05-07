#include <iostream>

using namespace std;

class Pointer
{
    int sid;
    string sname;
    string city;

    public:
        Pointer(int sid,string sname, string city)
        {
            this->sid = sid;
            this->sname = sname;
            this->city = city;
        }

        void display()
        {
            cout << "Student ID is : " << sid << endl;
            cout << "Student Name is : " << sname << endl;
            cout << "Student City is : " << city << endl;
        }
};


int main()
{
    Pointer p1 = Pointer(1,"Umang","Patan");
    
    p1.display();

    return 0;
}
