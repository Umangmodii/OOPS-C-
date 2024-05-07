#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:
        int id;
        string name;

        Student(int i, string n)
        {
                id = i;
                name = n;
        }

        void display()  
        {
            cout << "The id is : " << id << endl;
            cout << "The name is : " << name << endl;
        }
};

int main()
{
    Student s1 = Student(1,"Umang");
    Student s2 = Student(2,"Parth");

    s1.display();
    s2.display();

    return 0;
}