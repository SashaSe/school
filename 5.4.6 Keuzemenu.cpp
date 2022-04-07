#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    char a;
    cout << "Choose one film by letter(case sensitive):\nA : film1\nB : film2\nC : film3\nD : film4\nE : film5\n";
    cin >> a;
    while (a!='A'&&a!='B'&&a!='C'&&a!='D'&&a!='E') {
        cout << "You've entered a wrong letter, try again!\nA : film1\nB : film2\nC : film3\nD : film4\nE : film5\n";
        cin >> a;
    }
    switch (a) {
    case 'A':
        cout << "Your choice ==> film1";
        break;
    case 'B':
        cout << "Your choice ==> film2";
        break;
    case 'C':
        cout << "Your choice ==> film3";
        break;
    case 'D':
        cout << "Your choice ==> film4";
        break;
    case 'E':
        cout << "Your choice ==> film5";
        break;
    default:
        cout << "Wrong letter";
        break;
    }
    system("pause");
}