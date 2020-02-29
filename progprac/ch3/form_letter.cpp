#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	stringstream ss;
	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age = 0;
	cout << "Enter the name of the person to whom you want to write: ";
	cin >> first_name;
	ss << "Dear " << first_name << ",\n";
	ss << "\n\tHow are you? I am fine. I miss you.";
	ss << " Do you want to play tennis sometime?";
	ss << " How about this Saturday at Dolores Park?";
	ss << " How are your parents and your brother doing?";
	cout << "Enter the name of a friend: ";
	cin >> friend_name;
	ss << "\n\n\tHave you seen " << friend_name << " recently?";
	cout << "Enter the sex of that friend (m/f): ";
	cin >> friend_sex;
	ss << " If you see " << friend_name << " please ask ";
	if (friend_sex == 'm') {
		ss << "him";
	} else if (friend_sex == 'f') {
		ss << "her";
	} else {
		ss << "them";
	}
	ss << " to call me.";
	cout << "Enter the age of the recipient: ";
	cin >> age;
	if (age < 0 || age > 110) {
		cerr << "error: " << "you're kidding!" << endl;
		exit(1);
	}
	ss << "\n\n\tI hear you just had a birthday and you are " << age << " years old.";
	if (age < 12) {
		ss << " Next year you will be " << age + 1 << ".\n";
	} else if (age == 17) {
		ss << " Next year you will be able to vote.\n";
	} else if (age > 70) {
		ss << " I hope you are enjoying your retirement.\n";
	}
	ss << "\n\tYours sincerely,\n\n\n\tAbhaya Parthy";
	// print the letter
	cout << "The letter reads...\n" << ss.str() << endl;
}

