#include <iostream>

using namespace std;

class Base_class
{
 public:
    int id;
            Base_class(int id)
            {
                this->id = id;
            }
};

class Parent_class : public Base_class
{
    public:
        string name;

        Parent_class(int id, string name) : Base_class(id)
        {
            this->id = id;
            this->name = name;
        }

        void display()
        {
            cout << "The id is : " << id << endl;
            cout << "The Name is : " << name;
        }
    
};

int main()
{
    Parent_class p1(1,"Umang");
    p1.display();
    
    return 0;
}