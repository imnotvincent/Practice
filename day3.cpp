/* Filename: day3.cpp
   Description: Program to demonstrate math and user input
   Author: Vincent Vu
   Date: 1/15/2019
*/

#include <iostream> // cout cin
#include <string> //string
#include <iomanip> // setprecision
using namespace std;

int main()
{
    int numInStock; // Number of product in inventory
    float price4One; // price per product
    bool inStock; //true if in stock false if out of stock
    char source; //G for generic, B for brand
    string productName; // product name
    float totalValue;

    cout << "What is the name of the product? ";
    getline(cin, productName);
    cout << "How many " << productName << "s are in stock? ";
    cin  >> numInStock;
    cout << "What is the price of one " << productName << "? ";
    cin  >> price4One;
    cout << "What is the source? (G for generic, B for brand-name) ";
    cin  >> source;
    cout << "Are There " << productName << "s in stock ? (1 for yes, 2 for no) ";
    cin  >> inStock;

    totalValue = numInStock * price4One;

    cout << endl << endl;
    cout << "\t\t Product Inventory";
    cout << "Product:    " << productName << endl;
    cout << "# in sotck: " << numInStock << endl;
    cout << "Price:      " << price4One << endl;
    cout << "Source:     " << source << endl;
    cout << "In Stock ?  " << inStock << endl << endl;

    cout << fixed << showpoint << setprecision(2);
    cout << "Total value of inventory:   $" << totalValue << endl << endl;

    return 0;
}
