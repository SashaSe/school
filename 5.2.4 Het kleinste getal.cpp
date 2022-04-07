#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int a,b,c;
    cout << "Enter first nuber: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if (a<b && a<c)
        cout << "The smallest number: " << a;
    else if (b<a && b<c)
        cout << "The smallest number: " << b;
    else if (b==a && b==c)
        cout << "The numbers are equal";
    else 
        cout << "The smallest number: " << c;
    system("pause");
}