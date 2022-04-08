#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    char a;
    cout << "Enter character: ";
    cin >> a;
    for (int i = 0; i < 100; i++)
    {
        cout << a;
    }
    system("pause");
}