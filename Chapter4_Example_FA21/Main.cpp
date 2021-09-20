#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	string name;
	cout << "\nwhat is your age: ";
	cin >> age;
	cout << endl << "The age you entered is: " << age;
	cin.ignore(128,'\n');
	cout << "\nenter your name: ";
	getline(cin, name);
	cout << "\nThe name you entered is: " << name;

	return 0;
}