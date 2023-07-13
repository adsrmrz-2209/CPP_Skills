#include <iostream>

using namespace std;

int main()
{
	//using arrays on char variables will allow you to initialize words like the string does but it will only focus on the letters.
	char first_name[50]{ "Bjarne" };
	char last_name[50]{ "Stroustrup" };
	char whole_name[50];

	int first_name_length = strlen(first_name); //strlen() counts how many char or letters are in the string.
	int last_name_length = strlen(last_name);

	//getline() reads the line
	//cin >> whole_name;          //this will include the inputs entered but it will stop reading the input once there is a blank space or it reaches \n
	//cin.getline(whole_name, 50);  //this will include all the inputs entered even if there is a blank space
	//cout << endl << whole_name << endl;

	//USE strcpy_s() WHEN USING VISUAL STUDIO AS IDE, strcpy() DOES NOT WORK
	//strcpy(whole_name, first_name);

	strcpy_s(whole_name, first_name);   //strcpy_s allows you to copy the source then place it on the destination. remember  strcpy_s(DESTINATION, SOURCE), it goes from right to left

	cout << "Whole name: " << whole_name << endl;
	cout << "The length of the first name is " << first_name_length << endl;
	cout << "The length of the last name is " << last_name_length << endl;

	//USE strcat_s() WHEN USING VISUAL STUDIO AS IDE, strcat() DOES NOT WORK
	//strcat(whole_name, last_name);

	strcat_s(whole_name, " "); //add a blank space to properly separate the first name and last name
	strcat_s(whole_name, last_name);    //strcat_s(DESTINATION, SOURCE) , this allows you to chain char or string to the destination. in simpler terms, it will make the source join the destination.
	cout << "Whole name: " << whole_name << endl;
	int  whole_name_length = strlen(whole_name);
	cout << "The length of the whole  name is " << whole_name_length << endl;
}

