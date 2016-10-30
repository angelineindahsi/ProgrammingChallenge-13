#include <iostream>
#include <string>
using namespace std ;

class retailItem
{
private:
    string description;
    int unitsOnHand;
    double price;
public:
    retailItem(string description, int unitsOnHand, double price);
    string getDescription();
    int getUnits();
    double getPrice();
    
    void setDescription(int newDescription);
    void setUnit(int newUnit);
    void setPrice(int newPrice);
};

retailItem::retailItem(string description, int unitsOnHand, double price)
{
    this->description = description;
    this->unitsOnHand = unitsOnHand;
    this->price = price;
}

string retailItem::getDescription()
{
    return description;
}

int retailItem::getUnits()
{
    return unitsOnHand;
}

double retailItem::getPrice()
{
    return price;
}

void retailItem::setDescription(int newDescription)
{
    description = newDescription;
}

void retailItem::setUnit(int newUnit)
{
    unitsOnHand = newUnit;
}

void retailItem::setPrice(int newPrice)
{
    price = newPrice;
}

int main ()
{
    retailItem item1=retailItem("Jacket", 12, 59.95);
    retailItem item2=retailItem("Designer Jeans", 40, 34.95);
    retailItem item3=retailItem("Shirt", 20, 24.95);
    
    retailItem itemArray[3]={item1, item2, item3};
    for(int i=0; i<3; i++)
    {
        printItem(itemArray[i]);
    }
    return 0;
}

void printItem(retailItem a)
{
    cout << "Item description: " << a.getDescription() << endl;
    cout << "Units on hand: " << a.getUnits() << endl;
    cout << "Price: $ " << a.getPrice() << endl;
}
