#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int l;
    char g;
    cout << "Enter the amount of liter: ";
    cin >> l;
    if (l>=20) {
        cout << "Choose motorist gender:\nF-Female\nM-Male: ";
        cin >> g;
    }
    if (l>0 && l<10)
        cout << "Petrol price: " << l*1.25 << ". Don't forget to give a cup.";
    else if (l>=10 && l<20)
        cout << "Petrol price with discount: " << l*1.23 << ". Don't forget to give a cup.";
    else if (l>=20 && g=='F' || l>=20 && g=='f')
        cout << "Petrol price with discount: " << l*1.23 << ". Don't forget to give a cup and T-Shirt.";
    else if (l>=20 && g=='M' || l>=20 && g=='m')
        cout << "Petrol price with discount: " << l*1.23 << ". Don't forget to give a cup and stamp.";
    else 
        cout << "Check entered data and try again.";
    system("pause");
}