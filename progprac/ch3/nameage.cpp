#include <string>
#include <iostream>

using namespace std;

int main()
{
	double age = 0.0;
	string first_name = "???";
	cout << "Please enter your first name and your age:" << endl;
	cin >> first_name >> age;
	cout << "Hello, " << first_name << " (age " << age * 12 << " months)" << endl;
	return 0;
}

