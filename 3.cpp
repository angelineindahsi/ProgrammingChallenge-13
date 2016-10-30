#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car (int, string, int);
    string getMake();
    int getModel();
    int getSpeed();
    void acceleration();
    void brake();
};

Car::Car(int yearOfModel, string make, int speed)
{
    this->yearModel = yearOfModel;
    this->make = make;
    this->speed = speed;
}

string Car::getMake()
{
    return make;
}

int Car::getModel()
{
    return yearModel;
}

int Car::getSpeed()
{
    return speed;
}

void Car::acceleration()
{
    cout << "Current speed= " << speed << endl;
    for(int i=0; i<5; i++)
    {
        speed = speed + 5;
        cout << "The acceleration is " << i+1 << "= " << speed << endl;
    }
    
}

void Car::brake()
{
    cout << "The current speed after 5 times = " << speed << endl;
    for(int i=0; i<5; i++)
    {
        speed = speed - 5;
        cout << "The brake is= " << i+1 << "= " << speed << endl;
    }
}


int main ()
{
    int year, speed;
    string make;
    
    cout << "Enter the year model: " << endl;
    cin >> year;
    cout << "Enter make: " << endl;
    cin >> make;
    cout << "Enter the speed: " << endl;
    cin >> speed;
    
    cout << endl;
    
    Car one(year, make, speed);
    one.acceleration(one.getSpeed());
    one.brake(one.getSpeed());
    
    return 0;
}


