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

    int eid;
    string ename;
    string eaddress;
    string estate;

    cout << "Employee id is : ";
    cin >> eid;
    
    cin.ignore(); // New Line

    cout << "Employee Name is : ";
    cin >> ename;
    
    cin.ignore(); // New Line

    cout << "Employee Address is : ";
    cin >> eaddress;
    
    cin.ignore(); // New Line

    cout << "Employee State is : ";
    cin >> estate;
    
    cin.ignore(); // New Line

    Employee e1 = Employee(eid,ename,eaddress,estate);

    e1.display();

    return 0;
}