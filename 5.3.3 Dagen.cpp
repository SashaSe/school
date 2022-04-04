#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int year,month,b;
    float leap, centuryleap;
    int a [12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string name [12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month number: ";
    cin >> month;
    leap = year%4;
    centuryleap = year%400;
    b = month - 1;
    if (month >= 1 && month <=12) {
        if (leap == 0 && month == 2 || centuryleap == 0 && month == 2) 
            cout << "February " << year << " has 29 days.";
        else 
            cout << name [b] << " " << year << " has " << a [b] << " days.";
    }
    else
        cout << "You've entered wrong month number.";
    system("pause");
}