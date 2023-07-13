#include <iostream>
#include <vector>
using namespace std;

void project(); //function prototype

int main()
{
	project();
}

void project() 
{
	char choice{};
	vector<int> vectorData{};
	int number_toAdd{};

	while (choice != 'q' && choice != 'Q')
	{
		cout << "[P] - Print Numbers" << endl;
		cout << "[A] - Add Number" << endl;
		cout << "[M] - Display Mean of the Numbers" << endl;
		cout << "[S] - Display smallest Number" << endl;
		cout << "[L] - Display largest Number" << endl;
		cout << "[Q] - Quit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			//PRINT THE DATA
		case 'p':
		case 'P':
			if (vectorData.size() <= 0) cout << "The number is empty!" << endl;
			else {
				cout << "[ ";
				for (int i = 0; i < vectorData.size(); i++) {
					cout << vectorData.at(i) << " ";
				}
				cout << "]";

			}
			cout << endl << endl;
			break;

			//ADD A NUMBER TO THE DATA
		case 'a':
		case 'A':
			cout << "Add a number: ";
			cin >> number_toAdd;
			vectorData.push_back(number_toAdd);
			cout << endl << endl;
			break;

			//CALCULATE THE MEAN OF THE DATA
		case 'm':
		case 'M':

			if (vectorData.size() <= 0) cout << "Unable to calculate the mean - no data!" << endl;
			else
			{
				int sum{};
				double mean{};
				for (int i{ 0 }; i < vectorData.size(); i++) {
					sum += vectorData.at(i);
				}


				mean = static_cast<double>(sum) / vectorData.size();
				cout << mean << endl;

			}
			cout << endl << endl;
			break;

			//FIND THE SMALLEST NUMBER IN THE DATA
		case 's':
		case 'S':
			if (vectorData.size() <= 0) cout << "Unable to find the smallest number - list is empty!" << endl;
			else {

				int smallestNum{ vectorData.at(0) }; //assume that the first vector data or the first array is the smallest

				//BETTER AND SIMPLER STRAIGHTFORWARD CODE
				for (auto vecVal : vectorData) {
					if (vecVal < smallestNum) {
						smallestNum = vecVal;
					}
				}
				cout << smallestNum << endl;
			}
			cout << endl << endl;
			break;

			//FIND THE LARGEST DATA
		case 'l':
		case 'L':
			if (vectorData.size() <= 0) cout << "Unable to find the smallest number - list is empty!" << endl;
			else {
				int largestNum{ vectorData.at(0) }; // assume that the first element is the largest number

				for (int i{ 0 }; i < vectorData.size(); i++)
				{
					if (vectorData.at(i) > largestNum) {
						largestNum = vectorData.at(i);
					}
				}

				//BETTER AND SIMPLER STRAIGHTFORWARD CODE
			/*	for (auto vecVal : vectorData)
				{
					if (vecVal > largestNum) {
						largestNum = vecVal;
					}
				}*/

				cout << largestNum << endl;
			}
			cout << endl << endl;
			break;

			//QUIT APPLICATION
		case 'q':
		case 'Q':
			cout << "Goodbye" << endl;
			break;

		default:
			cout << "That is not one of the choice, Please Enter again!" << endl << endl;
			break;
		}
	}
}