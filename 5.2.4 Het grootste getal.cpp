#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if (a>=b) 
        cout << a << "-" << b << "=" << a-b;
    else
        cout << b << "-" << a << "=" << b-a;
    system("pause");
}