#include <iostream>

using namespace std;

// Base class
class Base_class
{
    public:
        int student_id;
        string student_name;

        Base_class(int student_id,string student_name)
        {
            this->student_id=student_id;
            this->student_name=student_name;
        }
};

class Derived_class : public Base_class
{
    public:
        string student_address;
        int student_pincode;

            Derived_class(int student_id,string student_name,string student_address, int student_pincode) : Base_class(student_id,student_name)
            {             
                this->student_address=student_address;
                this->student_pincode=student_pincode;
            }

            void display()
            {
                cout << "Student id is : " << student_id << endl;
                cout << "Student name is : " << student_name << endl;
                cout << "Student address is : " << student_address << endl;
                cout << "Student pincode is : " << student_pincode << endl;
            }
};

int main()
{
    Derived_class d1(1,"Vanish","Mehshana",384265);
    d1.display();

    return 0;
}