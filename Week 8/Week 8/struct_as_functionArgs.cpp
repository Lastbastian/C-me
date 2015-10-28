#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct InventoryItem
{
    int partNum;
    string description;
    int onHand;
    double price;
};

void getItem(InventoryItem &p);             // Argument passed by reference
void showItem(const InventoryItem &p);      // Argument passed by constant reference

int main()
{
    InventoryItem part;                     // part is a variable of InventoryItem structure type
    
    getItem(part);
    showItem(part);
    return 0;
}

void getItem(InventoryItem &p)              // uses a reference parameter (can alter the original argument)
{
    // Get the part number.
    cout << "Enter the part number: ";
    cin >> p.partNum;

    // Get the part description
    cout << "Enter the part description: ";
    cin.ignore();
    getline(cin, p.description);
    
    // Get the quantity on hand.
    cout << "Enter the quantity on hand: ";
    cin >> p.onHand;
    
    // Get the unit price.
    cout << "Enter the unit price: ";
    cin >> p.price;
}


void showItem(const InventoryItem &p)       // passed as a constant reference (cannot alter the original argument)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number: " << p.partNum << endl;
    cout << "Part Description: " << p.description << endl;
    cout << "Quantity in Stock: " << p.onHand << endl;
    cout << "Unit price: $" << p.price << endl;
}