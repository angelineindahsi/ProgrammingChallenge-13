#include <iostream>
#include <string>
using namespace std;

class Data
{
private:
    string name;
    string address;
    int age;
    int phoneNo;
public:
    Data(string name, string address, int age, int phoneNo);
    void setName(string newName);
    void setAddress(string newAddress);
    void setAge(int newAge);
    void setPhoneNumber(int newPhonenumber);
    
    string getName();
    string getAddress();
    int getAge();
    int getPhone();
};

Data::Data(string name, string address, int age, int phoneNo)
{
    this->name = name;
    this->address = address;
    this->age = age;
    this->phoneNo = phoneNo;
}

void Data::setName(string newName)
{
    name = newName;
}

void Data::setAddress(string newAddress)
{
    address = newAddress;
}

void Data::setAge(int newAge)
{
    age = newAge;
}

void Data::setPhoneNumber(int newPhonenumber)
{
    phoneNo = newPhonenumber;
}

string Data::getName()
{
    return name;
}

string Data::getAddress()
{
    return address;
}

int Data::getAge()
{
    return age;
}

int Data::getPhone()
{
    return phoneNo;
}

int main()
{
    Data myData;
    myData.setName("Angeline");
    myData.setAddress("Jakarta");
    myData.setAge("18");
    myData.setPhoneNumber("123456");
    
    cout << "Name: " << myData.getName() << endl;
    cout << "Address: " << myData.getAddress() << endl;
    cout << "Age: " << myData.getAge() << endl;
    cout << "Phone no: " << myData.getPhone() << endl;
    
    Data person2;
    person2.setName("Person");
    person2.setAddress("Jakarta");
    person2.setAge("17");
    person2.setPhoneNumber("123456");
    
    cout << "Name: " << person2.getName() << endl;
    cout << "Address: " << person2.getAddress() << endl;
    cout << "Age: " << person2.getAge() << endl;
    cout << "Phone no: " << person2.getPhone() << endl;
    
    Data person3;
    person3.setName("Somebody");
    person3.setAddress("Jakarta");
    person3.setAge("20");
    person3.setPhoneNumber("123456");
    
    cout << "Name: " << person3.getName() << endl;
    cout << "Address: " << person3.getAddress() << endl;
    cout << "Age: " << person3.getAge() << endl;
    cout << "Phone no: " << person3.getPhone() << endl;
    
    return 0;
}
