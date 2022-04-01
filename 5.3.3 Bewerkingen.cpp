#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int a,b;
    char o;
    cout << "Enter first number: ";
    cin >> a;
    cout << "\nEnter second number: ";
    cin >> b;
    cout << "\nEnter the operation of your choice:\nO = addition\nA = subtract\nV = multiply\nD = divide\n";
    cin >> o;
    if (o=='D' && b==0||o=='d' && b==0) {
        cout << "Error! You can't divide by 0";
    }
    else {
        switch (o)
        {
        case 'O': case 'o':
            cout << a << " + " << b << " = " << a+b;
                break;
        case 'A': case 'a':
            cout << a << " - " << b << " = " << a-b;
                break;
        case 'V': case 'v':
            cout << a << " * " << b << " = " << a*b;
                break;
        case 'D': case 'd':
            cout << a << " / " << b << " = " << a/b;
                break;
        default:
            cout << "You made an error when entering";
            break;
        }
    }
    system("pause");
}