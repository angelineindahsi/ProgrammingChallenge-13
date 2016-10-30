#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);
    int getDay();
    int getMonth();
    int getYear();
    
};

Date::Date(int day, int month, int year)
{
        this->day = day;
        this->month = month;
        this-> year = year;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

int main ()
{
    int date1, month1, year1;
    
    cout << "Input date: " << endl;
    cin >> date1;
    if (date1 < 31 && date1 >0)
    {
        cout << "Input month: " << endl;
        cin >> month1;
        
        if (month1 < 13 && month1 > 0)
        {
            cout << "Input year: " << endl;
            cin >> year1;
        }
    }
    
    Date input (date1, month1, year1);
    {
        string monthsArray[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        
        cout << input.getDay() << "/" << input.getMonth() << "/" << input.getYear() << endl;
        cout << input.getDay() << " " << monthsArray[input.getMonth()-1] << " " <<input.getYear()<< endl;
        cout << input.getDay() << " " << monthsArray[input.getMonth()-1] << " " <<input.getYear() << endl;
    }
    
    return 0;
}
