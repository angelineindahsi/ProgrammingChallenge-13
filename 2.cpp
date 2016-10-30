#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name;
    int idNumber;
    string department;
    string position;
    
public:
    Employee(string name, int idNumber, string department, string position);
    Employee(string name, int idNumber);
    Employee();
    string getName();
    string getID();
    string getDepartment();
    string getPosition();
};

Employee::Employee(string name, int idNumber, string department, string position) {
    this->name = " ";
    this->idNumber = idNumber;
    this->department = " ";
    this->position = " ";
}

Employee::Employee(string name, int idNumber) {
    this->name = " ";
    this->idNumber = 0;
    this->department = " ";
    this->position = " ";
}

Employee::Employee() {
    this->name = " ";
    this->idNumber = 0;
    this->department = " ";
    this->position = " ";
}

string Employee::getName()
{
    return name;
}

string Employee::getID()
{
    return idNumber;
}

string Employee::getDepartment()
{
    return department;
}

string Employee:: getPosition()
{
    return position;
}

int main () {
    Employee employee1 = Employee("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2 = Employee("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3 = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer");
    
    Employee employeeArray[] = {employee1, employee2, employee3};
    
    for (int i=0; i<3; i++)
    {
        cout << employeeArray[i].getName() << endl;
        cout << employeeArray[i].getID() << endl;
        cout << employeeArray[i].getDepartment() << endl;
        cout << employeeArray[i].getPosition() << endl;
    }
    return 0;
}
