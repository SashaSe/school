#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    char a;
    cout << "Choose one film by letter:\nA : film1\nB : film2\nC : film3\nD : film4\nE : film5\n";
    cin >> a;
    switch (a) {
    case 'A': case 'a':
        cout << "Your choice ==> film1";
        break;
    case 'B': case 'b':
        cout << "Your choice ==> film2";
        break;
    case 'C': case 'c':
        cout << "Your choice ==> film3";
        break;
    case 'D': case 'd':
        cout << "Your choice ==> film4";
        break;
    case 'E': case 'e':
        cout << "Your choice ==> film5";
        break;
    default:
        cout << "Wrong letter";
        break;
    }
    system("pause");
}