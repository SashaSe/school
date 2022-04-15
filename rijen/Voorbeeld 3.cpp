#include <iostream>
#include <iomanip>
using namespace std;

int sum_calculation() {
    int a,b,c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    c=b+a;
    return c;
}

int main() {
    int c;
    c = sum_calculation ();
    cout << "a + b = " << c;
}