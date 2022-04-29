#include <d:/c++/header.h>
#define TXT "d:/c++/output001.txt"

struct STUDENT
{
	int ID;
	string name;
	int age;
};

void schrijiven() 
{
	STUDENT student;
	ofstream file;
	file.open(TXT, ios::app);
	titelscherm("Example");
	cout << "ID: ";
	cin >> student.ID;

	while (student.ID!=0) {
		flush();
		cout << "Name: ";
		getline(cin, student.name);
		cout << "Age: ";
		cin >> student.age;


		file.width(3); file << right << student.ID << " ";
		file.width(20); file << left << student.name << " ";
		file.width(3); file << right << student.age << endl;

		titelscherm("Example");
		cout << "ID: ";
		cin >> student.ID;
	}
	file.close();
}

void lezen() 
{
	ifstream file;
	string line; //char line[100]
	file.open(TXT, ios::in);
	titelscherm("Output file");
	//file >> line;
	getline(file, line);
	while (!file.eof()) {
		cout << line << endl;

		//file >> line;
		getline(file, line);
	}
	file.close();
}

int main()
{
	schrijiven();
	lezen();

	return 0;
}

