#include <iostream>
#include <iomanip>
using namespace std;

int slim() {
    const int a = 2;
    int r;
    string message[a] = { 
                            "De anderen zijn dom",
                            "Mijn leerkracht is geweldig"
                          };

    srand( time(0) );
    for (int i = 0; i < 20; i++)
    {
        r = rand()%a;
        cout << message[r] << endl;
    }
    return 0;
} 

int main() 
{
    slim();
    system("pause");
    return 0;
}