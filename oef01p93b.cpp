#include <d:/c++/header.h>
#define DAT "d:/c++/gemeentes.dat"

struct CITY
{
    int zipcode;
    char name[20];
};

void schrijven() //write
{
    ofstream file;
    CITY city;
    file.open(DAT, ios::app | ios::binary);
    titelscherm("Gementes toevoegen");
    cout << "Enter zipcode (0 to stop):";
    cin >> city.zipcode;
    while (city.zipcode != 0)
    {
        flush();
        cout << "Enter city name: ";
        gets_s(city.name);

        file.write((char*)&city, sizeof(CITY));

        cout << "Enter zipcode (0 to stop):";
        cin >> city.zipcode;
    }
    file.close();
}

void lezen() //read
{
    ifstream file;
    CITY city;
    file.open(DAT, ios::in | ios::binary);
    titelscherm("Gementes toevoegen");
    file.read((char*)&city, sizeof(CITY));
    while (!file.eof())
    {
        cout << city.zipcode << " " << city.name << endl;

        file.read((char*)&city, sizeof(CITY));
    }
    file.close();
}

void opzoeken() //output
{
    int zoekwaarde; //search value
    CITY city;
    bool found = false;
    ifstream file;
    file.open(DAT, ios::in | ios::binary);
    titelscherm("Postcodes search");
    cout << "Zipcode:";
    cin >> zoekwaarde;

    do
    {
        file.read((char*)&city, sizeof(CITY));
        found = zoekwaarde == city.zipcode;
    } while (!found && !file.eof());

    file.close();

    if (found)
        cout << city.zipcode << " " << city.name << endl;
    else
        cout << zoekwaarde << " not found." << endl;
}

int main()
{
    schrijven();
    lezen();
    opzoeken();
    return 0;
}