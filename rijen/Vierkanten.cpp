#include <iostream>
#include <iomanip>
using namespace std;

int square(int a) {
    if (a>0)
    cout << "Perimeter = " << a*4 << "\nArea = " << a*a << endl;
    else if (a<0)
    cout << "Error! A is negative number" << endl;
}

int main() {
    int a;
    do {
    cout << "Enter side of a square (0 to stop the program): ";
    cin >> a;
    square (a);
    } while(a!=0);
}
