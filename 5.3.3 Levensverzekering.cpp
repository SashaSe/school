#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int amount,slices,premium;
    float age;
    cout << "Please enter the amount you want to be insured for: ";
    cin >> amount;
    cout << "Please enter your age: ";
    cin >> age;
    age = age/20;
    slices = amount/1000;
    if (age < 1) {
        premium=slices*1.5;
        cout << "Premium = " << premium;
    }
    else if (age >= 1 && age <=2) {
        premium=slices*4;
        cout << "Premium = " << premium;
    }
    else if (age > 2 && age <=3) {
        premium=slices*9;
        cout << "Premium = " << premium;
    }
    else if (age > 3 && age <=4) {
        premium=slices*16;
        cout << "Premium = " << premium;
    }
    else if (age > 4) {
        premium=slices*22.5;
        cout << "Premium = " << premium;
    }
}