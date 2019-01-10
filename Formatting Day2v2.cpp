/* Filename:    day2_var_format.cpp
   Description: Program demonstrates declaration and initialization of variables
                escapes sequences and formatting
   Author:      Vincent vu
   Date:        1/10/19
   Modifications:
*/

#include <iostream> //cout
#include <iomanip>  //fixed, showpoint, setw, setprecision
#include <string> // string data type
using namespace std;

int main()
{
   //declare variables
   int age; //user's age
   float price; //item price
   char initial; // user's middle initial
   float average; // average
   string myName;

   int day, //day
       month, //month
       year; //year


    //NO for CS 161: int day, month, year; *NOT ON SAME LINE*
    //no for CS 161: int day = 12;

   //Initialize variables
   age = 20;
   price = 12.958746465979;
   initial = 'M';
   average = 3.4123125;
   myName = "Vincent's ";

   //output variables
   //cout << "Age = " << age << endl;
   cout << "Average = " << setw(15) << average << endl;
   cout << fixed << showpoint << setfill ('.');
   cout << setprecision(2);
   cout << "Age = " << setw(14) << age << endl;
   cout << "Price = " << setw(15) << price << endl;
   cout << "Initial = " << setw(9) << initial << endl;
   cout << myName << "file \"Gifts\" location: c:\\desktop\\cs161\n";

    return 0;
}
