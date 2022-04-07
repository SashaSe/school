#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int a;
    cout << "Enter number of people: ";
    cin >> a;
    if (a>=10 && a<20)
        cout << "There are more than 10 people, 15% discount";
    else if (a>=20)
        cout << "There are more than 20 people, 30% discount";
    else 
        cout << "There are less than 10 people, no discount";
    system("pause");
}