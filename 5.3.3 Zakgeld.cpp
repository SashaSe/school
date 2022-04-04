#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
 
int main() 
{
    SetConsoleOutputCP(1252);
    string name;
    int faults;
    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter number of faults: ";
    cin >> faults;
    if (faults >= 0) {
        if (faults == 0) {
            cout << name << ", number of faults - " << faults << ", money - 25" << (char)(128);
        }
        else if (faults == 1) {
            cout << name << ", number of faults - " << faults << ", money - 17" << (char)(128);
        }
        else if (faults == 2) {
            cout << name << ", number of faults - " << faults << ", money - 12.5" << (char)(128);
        }
        else if (faults >= 3) {
            cout << name << ", number of faults - " << faults << ", money - 5" << (char)(128);
        }
    }
    else 
    cout << "wrong number of faults";
    system("pause");
}
