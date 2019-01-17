/* Filename: Day4-ifAge.cpp
   Description: Demo if conditional structures.
   Author: Vincent Vu
   Date: 1/17/2019
*/

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "How old are you?  \n";
    cout << "Enter an integer:  ";

    cin  >> age;

/*    if (age < 0)
        cout << "Too young\n";
    else if (age > 110)
        cout << "Too Old\n";
    else
        cout << "Just Right!";


    if (age >= 0 || age <= 110)
        cout << "Valid input\n";
    else
    cout << "Invalid input\n";
*/

    if (age == 25)
    {
        cout << "You have finished high school.\n"
             << "Car insurance is cheaper!\n\n";
    }
    else if (age < 16)
        cout << "You cannon drive on your own yet.\n";

    else if (age < 25)
    {
        cout << "You might be in high school.\n";
        cout << "You are paying a lot for car insurance.\n\n";
    }
    else
    {
        cout << "You have cheap insurance.";
    }
    return 0;
}
