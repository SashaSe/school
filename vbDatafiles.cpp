#include <d:/c++/header.h>
#define DAT "d:/c++/vbDatafiles.dat"

void schrijven()
{
    int number;
    ofstream file;
    file.open(DAT, ios::app | ios::app);

    cout << "Geef een getal: ";
    cin >> number;
    
    while (number != 0)
    {
        file.write((char*)&number, 4);
        cout << "Geef een getal: ";
        cin >> number;
    }
    file.close();
}

void lezen()
{
    int number;
    ifstream file;
    file.open(DAT, ios::in | ios::binary);
    file.read((char*)&number, 4);
    while (!file.eof())
    {
        cout << number << endl;
        file.read((char*)&number, sizeof(int));
    }
    file.close();
}

int main() 
{
    schrijven();
    lezen();
    return 0;
}

