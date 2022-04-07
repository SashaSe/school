#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int months;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter number of months: ";
    cin >> months;
    if (months>=12) 
    cout << "Your name: " << name << ". Thank you for the work, your bonus: 150 euro.";
    else 
    cout << "Your name: " << name << ". You work less than 12 months, no bonus.";
    system("pause");
}