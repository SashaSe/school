#include <iostream>
#include <iomanip>
using namespace std;

int sum_calculation(int a,int b) {
    int c;
    c=b+a;
    return c;
}

int main() {
    int a,b,c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    c = sum_calculation (a,b);
    cout << a << " + " << b << " = " << c;
}