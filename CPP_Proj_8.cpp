#include <iostream>
#include <string>

using namespace std;

int main()
{
	string unformatted_full_name{ "StephenHawking" };

	string first_name{ unformatted_full_name, 0, 7 }; // also acceptable
	//string first_name{}; // also acceptable
	string last_name{};
	string formatted_full_name{};

	//first_name = unformatted_full_name.substr(0, 7); //also acceptable
	cout << "First name is: " << first_name << endl;

	last_name = unformatted_full_name.substr(7, 7);
	cout << "Last name is: " << last_name << endl;

	formatted_full_name = first_name + last_name;
	cout << "Full name is: " << formatted_full_name << endl;

	formatted_full_name.insert(7, " ");
	cout << "Full name is: " << formatted_full_name << endl;
}
