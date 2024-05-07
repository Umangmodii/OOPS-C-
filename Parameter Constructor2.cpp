#include <iostream>
#include <string>

using namespace std;

class Employee
{
    // Declare Data Member
    int employee_id;
    string employee_name;
    string employee_address;
    string employee_state;

    public:
        Employee(int eid, string ename, string eaddress, string estate)
        {
            employee_id = eid;
            employee_name = ename;
            employee_address = eaddress;
            employee_state = estate;
        }

        // Display the Output
        
        void display()
        {
            cout << "The Employee Id is : " << employee_id << endl;
            cout << "The Employee Name is :  " << employee_name << endl;
            cout << "The Employee Address is : " << employee_address << endl;
            cout << "The Employee State is : " << employee_state << endl;
        } 

};

int main()
{
    Employee e1 = Employee(1,"Mayank","Bukdi","Patan Gujarat");

    e1.display();

    return 0;
}