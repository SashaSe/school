#include <iostream>
#include <iomanip>
using namespace std;

int sum_calculation(int a,int b) {
    int c;
    c=b+a;
    cout << c;
}

int main() {
    int a,b,c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    sum_calculation(a,b);
}