#include <d:/c++/header.h>
#define TXT "d:/c++/output002.txt"
#define DOC "d:/c++/output002.doc"

string lines[100];

struct DATA
{
	int postcode;
	string name;
};

void toevoegen()
{
	DATA data;
	ofstream file;
	file.open(TXT , ios::app);
	titelscherm("Invoer gemeentes");
	cout << "Postcode: ";
	cin >> data.postcode;
	while (data.postcode!=0)
	{
		flush();
		cout << "Naam: ";
		getline(cin, data.name);

		file << data.postcode << " " << data.name << endl;
		cout << "Postcode: ";
		cin >> data.postcode;
	}
	file.close();
}

int inlzen() 
{
	ifstream file;
	int i = 0;
	file.open(TXT, ios::in);
	getline(file, lines[i]);
	while (!file.eof())
	{
		i++;
		getline(file, lines[i]);
	}
	file.close();
	return i;
}

void lezen()
{
	ifstream file;
	string line;
	file.open(TXT, ios::in);
	file >> line;
	while (!file.eof())
	{
		cout << line << endl;
		file >> line;
	}
	file.close();
}

void sorteren(int l)
{
	for (size_t i = 0; i < l; i++)
	{
		for (size_t j = i+1; j < l; j++)
		{
			if (lines[i]>lines[j])
			{
				swap(lines[i], lines[j]);
			}
		}
	}
}

void schrijiven(int l)
{
	ofstream file;
	file.open(DOC, ios::out);
		for (size_t i = 0; i < l; i++)
		{

		}
}

int main() 
{
	toevoegen();
	lezen();
	int l = inlzen();
	sorteren(l);
	schrijiven(l);


	return 0;
}