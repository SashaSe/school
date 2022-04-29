#include <d:/c++/header.h>
#define TXT "d:/c++/oef04p85.txt"
#define DOC "d:/c++/oef04p85.doc"

struct MyStruct
{

};

char menu () 
{
	titelscherm("Oef 4 p 85");
	gotoxy(5, 5); cout << "1. Add film";
	gotoxy(5, 6); cout << "2. Make list";
	gotoxy(5, 7); cout << "3. Search";
	gotoxy(5, 9); cout << "0. Exit";
	gotoxy(5, 11); cout << "Your choice: ";
	return toupper(_getwch());
}

void toevoegen()
{
	ofstream file;
	string film;

	file.open(TXT, ios::app); //append
	titelscherm("Films toevoegen");
	cout << "Geef een film: ";
	getline(cin , film);
	while (film != "/")
	{
		file << film << endl;

		cout << "Geef een film: ";
		getline(cin, film);
	}
	file.close();
}

void maken()
{
	int count = 0, page = 0;
	string line;
	ofstream doc;
	ifstream text;
	doc.open(DOC, ios::out);
	text.open(TXT, ios::in);
	titelscherm("Document maken");
	getline(text, line);

	while (!text.eof())
	{
		if (count % 30 == 0)
		{
			page++;
			doc << "LIJST VAN FILMS (pagina" << page << ")" << endl;
			doc << "-----------------------------\n\n";
		}
		strupr_s(line);
		doc << line << "\n";
		count++;
		if (count % 5 == 0)
			doc << "\n";
		if (count % 30 == 0)
		{
			doc << "\f";
		}

		getline(text, line);
	}

	text.close();
	doc.close();
}

void opzoeken()
{
	char zoekwaarde;
	string line;
	bool found = false;
	ifstream file;
	file.open(TXT, ios::in);
	titelscherm("Films zoeken");
	cout << "Geef de eerste letter: ";
	zoekwaarde = toupper(_getwche());
	cout << endl;

	getline(file, line);
	while (!file.eof())
	{
		if (zoekwaarde == toupper(line[0]))
		{
			cout << line << endl;
			found = true;
		}
		getline(file, line);
	}
	if (!found)
		cout << "Geen films met deze letter" << endl;
	file.close();
}

int main()
{
    char keuze;
	do
	{
		keuze = menu();
		switch (keuze)
		{
		case '0':
		case'E':
			melding("Exit program", "Thanks, see you later");
			break;
		case '1':
		case'A':
			toevoegen();
			break;
		case '2':
		case 'M':
			maken();
			break;
		case '3':
		case 'S':
			opzoeken();
			break;
		default:
			melding("Error", "wrong choice");
		}

	} while (keuze!='E' && keuze!='0');
    return 0;
}